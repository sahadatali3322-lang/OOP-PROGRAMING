#include "Report.h"
#include <fstream>
#include <iostream>

void Report::exportTransactions(const User& user) {
    std::ofstream file("report.csv", std::ios::app);
    file << "ID,Type,Amount,Date,Details\n";
    for (auto& tx : user.history) {
        file << tx.id << "," << tx.type << "," << tx.amount << "," 
             << tx.timestamp << "," << tx.details << "\n";
    }
    file.close();
    std::cout << "Exported transactions to report.csv\n";
}
