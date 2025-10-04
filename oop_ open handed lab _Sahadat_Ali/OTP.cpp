#include "OTP.h"
#include <cstdlib>
#include <ctime>

std::string OTP::generateOTP() {
    srand(time(0));
    int code = rand() % 900000 + 100000;
    return std::to_string(code);
}

bool OTP::verifyOTP(const std::string& input, const std::string& actual) {
    return input == actual;
}
