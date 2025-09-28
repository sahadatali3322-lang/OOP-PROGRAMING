#include <iostream>
#include <fstream>
#include "FileOperations.h"

bool FileOperations::appendToFile(const std::string& filename, const std::string& content) {
    std::ofstream fout(filename, std::ios::app);
    
    if (!fout.is_open()) {
        std::cerr << "Error: Could not open file " << filename << " for appending." << std::endl;
        return false;
    }
    
    fout << content << std::endl;
    fout.close();
    
    std::cout << "Data appended successfully to " << filename << std::endl;
    return true;
}