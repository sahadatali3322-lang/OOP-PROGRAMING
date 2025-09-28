#include <iostream>
#include <fstream>
#include"FileOperations.h"

bool FileOperations::writeToFile(const std::string& filename, const std::string& content) {
    std::ofstream fout(filename); // ios::out by default (truncates)
    
    if (!fout.is_open()) {
        std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
        return false;
    }
    
    fout << content;
    fout.close();
    
    std::cout << "Data written successfully to " << filename << std::endl;
    return true;
}