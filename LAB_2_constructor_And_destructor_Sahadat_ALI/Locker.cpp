#include "Locker.h"

Locker::Locker() {
    std::cout << "Locker allocated to customer.\n";
}

Locker::~Locker() {
    std::cout << "Locker returned by customer.\n";
}