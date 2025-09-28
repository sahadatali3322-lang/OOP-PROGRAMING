#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "StudentRecord.h"

void StudentRecordManager::addStudent(const Student& student) {
    std::ofstream fout(filename, std::ios::app);
    
    if (!fout.is_open()) {
        std::cerr << "Error: Could not open file for writing." << std::endl;
        return;
    }
    
    fout << student.rollNo << "," << student.name << "," << student.gpa << std::endl;
    fout.close();
    
    std::cout << "Student record added successfully!" << std::endl;
}

void StudentRecordManager::displayAllStudents() {
    std::ifstream fin(filename);
    
    if (!fin.is_open()) {
        std::cerr << "Error: Could not open file for reading." << std::endl;
        return;
    }
    
    std::cout << "\nStudent Records:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << std::setw(8) << "Roll No" << std::setw(15) << "Name" << std::setw(8) << "GPA" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    
    std::string line;
    while (getline(fin, line)) {
        std::stringstream ss(line);
        std::string token;
        int rollNo;
        std::string name;
        double gpa;
        
        // Parse CSV line
        getline(ss, token, ',');
        rollNo = std::stoi(token);
        
        getline(ss, name, ',');
        
        getline(ss, token, ',');
        gpa = std::stod(token);
        
        std::cout << std::setw(8) << rollNo << std::setw(15) << name << std::setw(8) << gpa << std::endl;
    }
    
    fin.close();
    std::cout << "----------------------------------------" << std::endl;
}

void StudentRecordManager::updateStudent(int rollNo, const Student& newStudent) {
    std::fstream file(filename, std::ios::in | std::ios::out);
    
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file for update." << std::endl;
        return;
    }
    
    std::string line;
    long currentPos = 0;
    bool found = false;
    
    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string token;
        getline(ss, token, ',');
        int currentRollNo = std::stoi(token);
        
        if (currentRollNo == rollNo) {
            found = true;
            // Move back to the beginning of the line
            file.seekp(currentPos, std::ios::beg);
            file << newStudent.rollNo << "," << newStudent.name << "," << newStudent.gpa;
            std::cout << "Student record updated successfully!" << std::endl;
            break;
        }
        
        currentPos = file.tellg();
    }
    
    if (!found) {
        std::cout << "Student with Roll No " << rollNo << " not found." << std::endl;
    }
    
    file.close();
}

void StudentRecordManager::demonstrateSeekOperations() {
    std::fstream file(filename, std::ios::in | std::ios::out);
    
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file." << std::endl;
        return;
    }
    
    std::cout << "\nSeek Operations Demonstration:" << std::endl;
    
    // Go to beginning
    file.seekg(0, std::ios::beg);
    std::cout << "Position at beginning: " << file.tellg() << std::endl;
    
    // Go to end
    file.seekg(0, std::ios::end);
    std::cout << "Position at end: " << file.tellg() << std::endl;
    
    file.close();
}