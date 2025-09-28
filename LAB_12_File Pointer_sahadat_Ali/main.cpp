#include <iostream>
#include "FileOperations.h"
#include "StudentRecord.h"

void demonstrateBasicFileOperations();
void demonstrateStudentRecords();

int main() {
    std::cout << "=== C++ File Handling Complete Project ===" << std::endl;
    
    // Demonstration 1: Basic File Operations
    demonstrateBasicFileOperations();
    
    // Demonstration 2: Student Record Management
    demonstrateStudentRecords();
    
    std::cout << "\n=== Project Demonstration Complete ===" << std::endl;
    return 0;
}

void demonstrateBasicFileOperations() {
    std::cout << "\n\n1. BASIC FILE OPERATIONS DEMONSTRATION" << std::endl;
    std::cout << "========================================" << std::endl;
    
    // Write to file
    FileOperations::writeToFile("example.txt", "Hello File Handling!\nThis is line 2.\nThis is line 3.");
    
    // Read from file
    FileOperations::readFromFile("example.txt");
    
    // Append to file
    FileOperations::appendToFile("example.txt", "This line was appended!");
    FileOperations::readFromFile("example.txt");
    
    // File pointer demonstration
    FileOperations::demonstrateFilePointers("pointer_demo.txt");
}

void demonstrateStudentRecords() {
    std::cout << "\n\n2. STUDENT RECORD MANAGEMENT SYSTEM" << std::endl;
    std::cout << "========================================" << std::endl;
    
    StudentRecordManager manager("students.dat");
    
    // Add students
    manager.addStudent(Student(101, "Ali", 3.5));
    manager.addStudent(Student(102, "Bilal", 3.8));
    manager.addStudent(Student(103, "Chaudhry", 2.9));
    
    // Display all students
    manager.displayAllStudents();
    
    // Demonstrate seek operations
    manager.demonstrateSeekOperations();
    
    // Update a student record
    std::cout << "\nUpdating student record..." << std::endl;
    manager.updateStudent(102, Student(102, "Bilal Ahmed", 3.9));
    manager.displayAllStudents();
}