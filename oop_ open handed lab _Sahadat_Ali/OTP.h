#ifndef OTP_H
#define OTP_H

#include <string>

class OTP {
public:
    static std::string generateOTP();
    static bool verifyOTP(const std::string& input, const std::string& actual);
};

#endif
