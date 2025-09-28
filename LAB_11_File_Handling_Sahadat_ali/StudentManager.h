#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <string>
#include <vector>

struct Student {
    std::string name;
    std::string rollNumber;
    
    Student(const std::string& n = "", const std::string& r = "") 
        : name(n), rollNumber(r) {}
};

class StudentManager {
public:
    bool writeStudentsToFile(const std::string& filename, const std::vector<Student>& students);
    std::vector<Student> readStudentsFromFile(const std::string& filename);
    
private:
    Student parseStudentLine(const std::string& line);
    std::string createStudentLine(const Student& student);
};

#endif