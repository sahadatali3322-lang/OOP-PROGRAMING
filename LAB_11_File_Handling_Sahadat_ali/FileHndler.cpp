#include "FileHandler.h"
#include <fstream>
#include <iostream>
#include <filesystem>

using namespace std;

bool FileHandler::writeFile(const string& filename, const vector<string>& content) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file for writing: " << filename << endl;
        return false;
    }
    
    for (const auto& line : content) {
        file << line << endl;
    }
    
    file.close();
    return true;
}

vector<string> FileHandler::readFile(const string& filename) {
    vector<string> content;
    ifstream file(filename);
    
    if (!file.is_open()) {
        cerr << "Error: Could not open file for reading: " << filename << endl;
        return content;
    }
    
    string line;
    while (getline(file, line)) {
        content.push_back(line);
    }
    
    file.close();
    return content;
}

bool FileHandler::appendFile(const string& filename, const vector<string>& content) {
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cerr << "Error: Could not open file for appending: " << filename << endl;
        return false;
    }
    
    for (const auto& line : content) {
        file << line << endl;
    }
    
    file.close();
    return true;
}

int FileHandler::countLines(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file for line counting: " << filename << endl;
        return -1;
    }
    
    int count = 0;
    string line;
    while (getline(file, line)) {
        count++;
    }
    
    file.close();
    return count;
}

bool FileHandler::copyFile(const string& sourceFile, const string& destFile) {
    ifstream source(sourceFile, ios::binary);
    ofstream dest(destFile, ios::binary);
    
    if (!source.is_open()) {
        cerr << "Error: Could not open source file: " << sourceFile << endl;
        return false;
    }
    
    if (!dest.is_open()) {
        cerr << "Error: Could not create destination file: " << destFile << endl;
        return false;
    }
    
    dest << source.rdbuf();
    
    source.close();
    dest.close();
    return true;
}

bool FileHandler::fileExists(const string& filename) {
    ifstream file(filename);
    return file.good();
}