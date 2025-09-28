#ifndef FILEOPERATIONS_H
#define FILEOPERATIONS_H

#include <fstream>
#include <string>

class FileOperations {
public:
    static bool writeToFile(const std::string& filename, const std::string& content);
    static bool readFromFile(const std::string& filename);
    static bool appendToFile(const std::string& filename, const std::string& content);
    static void demonstrateFilePointers(const std::string& filename);
};

#endif