#include <aws/sts/STSClient.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/Globals.h>
#include <iostream>

#include <aws/s3-crt/S3CrtClient.h>

#include "example.h"

bool AwsDoc::STS::getCallerIdentity(const Aws::Client::ClientConfiguration &clientConfig) {
    Aws::STS::STSClient sts(clientConfig);
    const Aws::STS::Model::GetCallerIdentityRequest req;

    const Aws::STS::Model::GetCallerIdentityOutcome outcome = sts.GetCallerIdentity(req);

    if (!outcome.IsSuccess()) {
        std::cerr << "Error getting caller identity. " <<
                  outcome.GetError().GetMessage() << std::endl;
    } else {
        std::cout << "Caller identtiy successfully retrieved." << std::endl;
        const Aws::STS::Model::GetCallerIdentityResult result = outcome.GetResult();
        const Aws::String &arn = result.GetArn();
        std::cout << "ARN: " << arn << std::endl;
    }

    const auto& headers = req.GetHeaders();
    //const auto it = headers.find(Aws::String("User-Agent"));
    //assert(it != headers.end());
    //std::cout << "User-Agent: " << std::string(FromAwsString(it->second)) << std::endl;
    //std::cout << "User-Agent: " << it->second << std::endl;
    std::cout << "HEADERS COUNT: " << headers.size() << std::endl;
    for(const auto& elem : headers) {
       std::cout << elem.first << ": " << elem.second << std::endl;
    }
    //std::cout << "User-Agent: " << sts.ComputUserAgentString() << std::endl;

    //const auto userAgent = headers.at(Aws::String("User-Agent"));
    //std::cout << "User-Agent: " << userAgent << std::endl;

    return outcome.IsSuccess();
}


int main(int argc, char **argv)
{
    Aws::SDKOptions options;

    options.ioOptions.tlsConnectionOptions_create_fn = []() {
        std::cout << "!! CALLBACK tlsConnectionOptions_create_fn CALLED !!" << std::endl;
        Aws::Crt::Io::TlsContextOptions tlsCtxOptions = Aws::Crt::Io::TlsContextOptions::InitDefaultClient();
        tlsCtxOptions.SetTlsCipherPreference(AWS_IO_TLS_CIPHER_PREF_PQ_TLSv1_0_2021_05);
        tlsCtxOptions.SetMinimumTlsVersion(AWS_IO_TLSv1_3);
        Aws::Crt::Io::TlsContext tlsContext(tlsCtxOptions, Aws::Crt::Io::TlsMode::CLIENT);
        return Aws::MakeShared<Aws::Crt::Io::TlsConnectionOptions>("PQ TESTING", tlsContext.NewConnectionOptions());
    };
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    Aws::InitAPI(options);

    {
        Aws::Client::ClientConfiguration clientConfig;
        // Optional: Set to the AWS Region in which the bucket was created (overrides config file).
        // clientConfig.region = "us-east-1";
        if (!AwsDoc::STS::getCallerIdentity(clientConfig))
        {
            return 1;
        }
    }


    Aws::Crt::Io::TlsContextOptions tlsCtxOptions = Aws::Crt::Io::TlsContextOptions::InitDefaultClient();
    tlsCtxOptions.SetTlsCipherPreference(AWS_IO_TLS_CIPHER_PREF_PQ_TLSv1_0_2021_05);
    tlsCtxOptions.SetMinimumTlsVersion(AWS_IO_TLSv1_3);
    Aws::Crt::ByteCursor badPath = Aws::Crt::ByteCursorFromCString("t0t@lLy_NoN_éXi$t@Nt_PaTh");
    tlsCtxOptions.SetKeychainPath(badPath);
    tlsCtxOptions.OverrideDefaultTrustStore(badPath);
    Aws::Crt::Io::TlsContext tlsContext(tlsCtxOptions, Aws::Crt::Io::TlsMode::CLIENT);
    auto tlsConnectionOptions = Aws::MakeShared<Aws::Crt::Io::TlsConnectionOptions>("PQ TESTING", tlsContext.NewConnectionOptions());

    Aws::S3Crt::ClientConfiguration s3Config;
    s3Config.tlsConnectionOptions = tlsConnectionOptions;
    s3Config.region = Aws::Region::US_EAST_1;
    s3Config.throughputTargetGbps = 5;
    s3Config.partSize = 8*1024*1024;

    Aws::S3Crt::S3CrtClient s3CrtClient(s3Config);
    Aws::S3Crt::Model::ListBucketsOutcome outcome = s3CrtClient.ListBuckets();
    if (outcome.IsSuccess()) {
        std::cout << "All buckets under my account:" << std::endl;
        for (auto const& bucket : outcome.GetResult().GetBuckets()) {
            std::cout << bucket.GetName() << std::endl;
        }
    }
    else {
        std::cout << "ListBuckets error:\n"<< outcome.GetError() << std::endl << std::endl;
        return 1;
    }

    Aws::ShutdownAPI(options);
    return 0;
}
