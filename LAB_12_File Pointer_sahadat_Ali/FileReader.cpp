#include <iostream>
#include <fstream>
#include <string>
#include "FileOperations.h"

bool FileOperations::readFromFile(const std::string& filename) {
    std::ifstream fin(filename);
    
    if (!fin.is_open()) {
        std::cerr << "Error: Could not open file " << filename << " for reading." << std::endl;
        return false;
    }
    
    std::string line;
    std::cout << "\nReading content from " << filename << ":" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    
    while (getline(fin, line)) {
        std::cout << line << std::endl;
    }
    
    fin.close();
    std::cout << "----------------------------------------" << std::endl;
    return true;
}