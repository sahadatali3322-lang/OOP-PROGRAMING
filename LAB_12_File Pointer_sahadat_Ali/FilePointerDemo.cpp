#include <iostream>
#include <fstream>
#include <string>
#include "FileOperations.h"

void FileOperations::demonstrateFilePointers(const std::string& filename) {
    std::fstream file(filename, std::ios::in | std::ios::out | std::ios::trunc);
    
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return;
    }
    
    // Write some data
    file << "01,Awais,3.5 ";
    file << "02,Kashif,3.8 ";
    file << "03,Zahid,2.5 ";
    file << "04,Ahmed,4.0 ";
    
    std::cout << "\nFile Pointer Demonstration:" << std::endl;
    std::cout << "Position of write pointer after writing: " << file.tellp() << std::endl;
    
    // Demonstrate tellg() - get pointer position
    file.seekg(0, std::ios::beg); // Move to beginning
    std::cout << "Position of read pointer at beginning: " << file.tellg() << std::endl;
    
    // Read first character
    char ch;
    file.get(ch);
    std::cout << "First character: " << ch << std::endl;
    std::cout << "Position after reading first character: " << file.tellg() << std::endl;
    
    // Demonstrate seekp() - move write pointer
    file.seekp(-13, std::ios::cur); // Move back 13 positions from current
    std::cout << "Write pointer position after seeking: " << file.tellp() << std::endl;
    
    // Overwrite data
    file << "05,Nadir,2.78";
    
    // Read and display the modified content
    file.seekg(0, std::ios::beg);
    std::string content;
    getline(file, content);
    std::cout << "Modified content: " << content << std::endl;
    
    file.close();
}