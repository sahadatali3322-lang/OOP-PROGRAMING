#include <iostream>
#include "SingleInheritance.h"
#include "MultipleInheritance.h"
#include "MultilevelInheritance.h"
#include "HierarchicalInheritance.h"
#include "DiamondProblem.h"
#include "VirtualInheritance.h"

using namespace std;

int main() {
    cout << "=== CS-1204 Object-Oriented Programming ===" << endl;
    cout << "=== Week 04: Inheritance Types Demonstration ===\n" << endl;
    
    // Demonstrate all types of inheritance
    demonstrateSingleInheritance();
    demonstrateMultipleInheritance();
    demonstrateMultilevelInheritance();
    demonstrateHierarchicalInheritance();
    demonstrateDiamondProblem();
    demonstrateVirtualInheritance();
    
    cout << "=== ALL DEMONSTRATIONS COMPLETED ===" << endl;
    
    return 0;
}