#include "Utils.h"
#include <sstream>
#include <iomanip>

std::string generateTransactionID() {
    static int counter = 1;
    std::ostringstream oss;
    oss << "TX" << std::setw(6) << std::setfill('0') << counter++;
    return oss.str();
}

std::string getCurrentDateTime() {
    time_t now = time(0);
    char buf[80];
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", localtime(&now));
    return buf;
}
