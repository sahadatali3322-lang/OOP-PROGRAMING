#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Teacher.h"
#include "Student.h"

class TeachingAssistant : public Teacher, public Student {
public:
    void assist();
};

#endif