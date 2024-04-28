#include <aws/sts/STSClient.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/Globals.h>
#include <iostream>

#include <aws/s3-crt/S3CrtClient.h>

#include "example.h"


int main(int argc, char **argv)
{
    Aws::SDKOptions options;

    // Override default log level for AWS common runtime libraries to prevent from being overwhelmed by logs from them.
    options.loggingOptions.crt_logger_create_fn = []() {
        std::cout << "!! CALLBACK crt_logger_create_fn CALLED !!" << std::endl;
        return Aws::MakeShared<Aws::Utils::Logging::DefaultCRTLogSystem>("PQ TESTING", Aws::Utils::Logging::LogLevel::Trace);
    };

    options.ioOptions.tlsConnectionOptions_create_fn = []() {
        std::cout << "!! CALLBACK tlsConnectionOptions_create_fn CALLED !!" << std::endl;
        Aws::Crt::Io::TlsContextOptions tlsCtxOptions = Aws::Crt::Io::TlsContextOptions::InitDefaultClient();
        tlsCtxOptions.SetTlsCipherPreference(AWS_IO_TLS_CIPHER_PREF_PQ_TLSv1_0_2021_05);
        tlsCtxOptions.SetMinimumTlsVersion(AWS_IO_TLSv1_3);
        Aws::Crt::ByteCursor badPath = Aws::Crt::ByteCursorFromCString("t0t@lLy_NoN_éXi$t@Nt_PaTh");
        tlsCtxOptions.SetKeychainPath(badPath);
        tlsCtxOptions.OverrideDefaultTrustStore(badPath);
        Aws::Crt::Io::TlsContext tlsContext(tlsCtxOptions, Aws::Crt::Io::TlsMode::CLIENT);
        auto opts = tlsContext.NewConnectionOptions();
        std::cout << "RETRUNING FROM CALLBACK..." << std::endl;
        return Aws::MakeShared<Aws::Crt::Io::TlsConnectionOptions>("PQ TESTING", opts);
    };
    options.loggingOptions.logLevel = Aws::Utils::Logging::LogLevel::Trace;
    Aws::InitAPI(options);
    {
        Aws::Client::ClientConfiguration clientConfig;
        Aws::STS::STSClient sts(clientConfig);
        const Aws::STS::Model::GetCallerIdentityRequest req;
        std::cout << "MAKING STS CALL..." << std::endl;
        const Aws::STS::Model::GetCallerIdentityOutcome outcome = sts.GetCallerIdentity(req);
        if (!outcome.IsSuccess()) {
            std::cerr << "Error getting caller identity. " <<
                      outcome.GetError().GetMessage() << std::endl;
            return 1;
        }
        std::cout << "Caller identtiy successfully retrieved." << std::endl;
        const Aws::STS::Model::GetCallerIdentityResult result = outcome.GetResult();
        const Aws::String &arn = result.GetArn();
        std::cout << "ARN: " << arn << std::endl;
        const auto& headers = req.GetHeaders();
        std::cout << "HEADERS COUNT: " << headers.size() << std::endl;
        for(const auto& elem : headers) {
           std::cout << elem.first << ": " << elem.second << std::endl;
        }

        Aws::S3Crt::ClientConfiguration s3Config;
        s3Config.tlsConnectionOptions = options.ioOptions.tlsConnectionOptions_create_fn();
        s3Config.region = Aws::Region::US_EAST_1;
        s3Config.throughputTargetGbps = 5;
        s3Config.partSize = 8*1024*1024;

        Aws::S3Crt::S3CrtClient s3CrtClient(s3Config);
        Aws::S3Crt::Model::ListBucketsOutcome s3Outcome = s3CrtClient.ListBuckets();
        if (!s3Outcome.IsSuccess()) {
            std::cout << "ListBuckets error:\n"<< s3Outcome.GetError() << std::endl << std::endl;
            return 1;
        }
        std::cout << "All buckets under my account:" << std::endl;
        for (auto const& bucket : s3Outcome.GetResult().GetBuckets()) {
            std::cout << bucket.GetName() << std::endl;
        }
    }
    Aws::ShutdownAPI(options);
    return 0;
}
