#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <string>
#include <vector>

class FileHandler {
public:
    // Basic file operations
    bool writeFile(const std::string& filename, const std::vector<std::string>& content);
    std::vector<std::string> readFile(const std::string& filename);
    bool appendFile(const std::string& filename, const std::vector<std::string>& content);
    
    // Utility functions
    int countLines(const std::string& filename);
    bool copyFile(const std::string& sourceFile, const std::string& destFile);
    bool fileExists(const std::string& filename);
};

#endif