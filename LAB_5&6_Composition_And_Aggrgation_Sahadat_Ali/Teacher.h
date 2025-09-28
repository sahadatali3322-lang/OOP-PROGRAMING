#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : virtual public Person {
public:
    void teach();
};

#endif