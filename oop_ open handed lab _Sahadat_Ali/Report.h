#ifndef REPORT_H
#define REPORT_H

#include "User.h"

class Report {
public:
    static void exportTransactions(const User& user);
};

#endif
