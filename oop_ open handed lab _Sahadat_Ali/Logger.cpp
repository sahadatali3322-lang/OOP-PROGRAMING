#include "Logger.h"
#include <fstream>
#include <ctime>

void Logger::log(const std::string& message) {
    std::ofstream file("smartpay.log", std::ios::app);
    time_t now = time(0);
    file << ctime(&now) << ": " << message << std::endl;
}
