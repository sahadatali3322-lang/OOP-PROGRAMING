#include "StudentManager.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

bool StudentManager::writeStudentsToFile(const string& filename, const vector<Student>& students) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file for writing students: " << filename << endl;
        return false;
    }
    
    for (const auto& student : students) {
        file << createStudentLine(student) << endl;
    }
    
    file.close();
    return true;
}

vector<Student> StudentManager::readStudentsFromFile(const string& filename) {
    vector<Student> students;
    ifstream file(filename);
    
    if (!file.is_open()) {
        cerr << "Error: Could not open file for reading students: " << filename << endl;
        return students;
    }
    
    string line;
    while (getline(file, line)) {
        Student student = parseStudentLine(line);
        if (!student.name.empty() && !student.rollNumber.empty()) {
            students.push_back(student);
        }
    }
    
    file.close();
    return students;
}

Student StudentManager::parseStudentLine(const string& line) {
    Student student;
    size_t commaPos = line.find(',');
    
    if (commaPos != string::npos) {
        student.name = line.substr(0, commaPos);
        student.rollNumber = line.substr(commaPos + 1);
        
        // Remove leading/trailing whitespace
        student.name.erase(0, student.name.find_first_not_of(" \t"));
        student.name.erase(student.name.find_last_not_of(" \t") + 1);
        student.rollNumber.erase(0, student.rollNumber.find_first_not_of(" \t"));
        student.rollNumber.erase(student.rollNumber.find_last_not_of(" \t") + 1);
    }
    
    return student;
}

string StudentManager::createStudentLine(const Student& student) {
    return student.name + "," + student.rollNumber;
}