#include <iostream>
#include "FileHandler.h"
#include "StudentManager.h"

using namespace std;

void demonstrateTask1() {
    cout << "=== TASK 1: Create, Write, Read, and Append a File ===" << endl;
    
    FileHandler fileHandler;
    string filename = "data/notes.txt";
    
    // Create and write to file
    vector<string> initialContent = {
        "This is the first line of text.",
        "This is the second line of text.",
        "This is the third line of text."
    };
    
    if (fileHandler.writeFile(filename, initialContent)) {
        cout << "File created and initial content written successfully." << endl;
    }
    
    // Read and display file content
    cout << "\nReading file content:" << endl;
    vector<string> content = fileHandler.readFile(filename);
    for (const auto& line : content) {
        cout << line << endl;
    }
    
    // Append to file
    vector<string> appendContent = {
        "Name: Muhammad Awais",
        "Roll Number: CS-1204"
    };
    
    if (fileHandler.appendFile(filename, appendContent)) {
        cout << "\nContent appended successfully." << endl;
    }
    
    // Read and display updated content
    cout << "\nReading updated file content:" << endl;
    content = fileHandler.readFile(filename);
    for (const auto& line : content) {
        cout << line << endl;
    }
    cout << endl;
}

void demonstrateTask2() {
    cout << "=== TASK 2: Count Number of Lines in a File ===" << endl;
    
    FileHandler fileHandler;
    string filename = "data/notes.txt";
    
    int lineCount = fileHandler.countLines(filename);
    if (lineCount >= 0) {
        cout << "Total number of lines in '" << filename << "': " << lineCount << endl;
    }
    cout << endl;
}

void demonstrateTask3() {
    cout << "=== TASK 3: Copy Content from One File to Another ===" << endl;
    
    FileHandler fileHandler;
    string sourceFile = "data/notes.txt";
    string destFile = "data/notes_copy.txt";
    
    if (fileHandler.copyFile(sourceFile, destFile)) {
        cout << "File copied successfully from '" << sourceFile << "' to '" << destFile << "'" << endl;
        
        // Display copied content
        cout << "\nContent of copied file:" << endl;
        vector<string> content = fileHandler.readFile(destFile);
        for (const auto& line : content) {
            cout << line << endl;
        }
    }
    cout << endl;
}

void demonstrateTask4() {
    cout << "=== TASK 4: Write Student Details and Then Read Them ===" << endl;
    
    StudentManager studentManager;
    string filename = "data/students.txt";
    
    // Create student records
    vector<Student> students = {
        Student("Ali Khan", "CS-1001"),
        Student("Sara Ahmed", "CS-1002"),
        Student("Usman Hassan", "CS-1003")
    };
    
    // Write students to file
    if (studentManager.writeStudentsToFile(filename, students)) {
        cout << "Student records written to file successfully." << endl;
    }
    
    // Read and display students from file
    cout << "\nReading student records from file:" << endl;
    vector<Student> readStudents = studentManager.readStudentsFromFile(filename);
    
    for (const auto& student : readStudents) {
        cout << "Name: " << student.name << ", Roll Number: " << student.rollNumber << endl;
    }
    cout << endl;
}

int main() {
    // Create data directory if it doesn't exist
    system("mkdir -p data");
    
    demonstrateTask1();
    demonstrateTask2();
    demonstrateTask3();
    demonstrateTask4();
    
    cout << "All file handling tasks completed successfully!" << endl;
    return 0;
}