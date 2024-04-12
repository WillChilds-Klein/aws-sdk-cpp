#include <aws/sts/STSClient.h>
#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <iostream>

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
    Aws::ShutdownAPI(options);
    return 0;
}
