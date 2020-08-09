#include <iostream>

struct AnalyticsName {
    std::string googleAnalytics;
    std::string amazonAnalytics;
};

int main() {
    AnalyticsName Application = {"g_application", "a_application"};
    std::cout << Application.googleAnalytics << std::endl;
    std::cout << Application.amazonAnalytics << std::endl;
    return 0;
}