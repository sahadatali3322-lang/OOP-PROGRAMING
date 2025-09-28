#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "MathOperations.h"

int main() {
    std::cout << "=== OOP Concepts Demonstration ===" << std::endl;
    std::cout << "=== Friend Functions, Static Members, Pure Abstract Functions ===\n" << std::endl;
    
    // Create objects of derived classes
    Rectangle rect1("Rect1", 5.0, 3.0);
    Rectangle rect2("Rect2", 4.0, 6.0);
    Circle circle1("Circle1", 2.5);
    Circle circle2("Circle2", 3.0);
    
    std::cout << "\n" << std::string(50, '=') << std::endl;
    
    // Demonstrate pure virtual functions (polymorphism)
    std::cout << "\n=== Polymorphism with Pure Virtual Functions ===" << std::endl;
    Shape* shapes[] = {&rect1, &circle1, &rect2, &circle2};
    
    for (int i = 0; i < 4; i++) {
        shapes[i]->display();  // Runtime polymorphism
    }
    
    std::cout << "\n" << std::string(50, '=') << std::endl;
    
    // Demonstrate friend functions
    std::cout << "\n=== Friend Functions Demonstration ===" << std::endl;
    
    // Friend function from base class
    printShapeDetails(rect1);
    printShapeDetails(circle1);
    
    // Friend function specific to Rectangle
    std::cout << "Rectangle diagonal: " << calculateDiagonal(rect1) << std::endl;
    
    // Friend function specific to Circle
    std::cout << "Circle circumference: " << calculateCircumference(circle1) << std::endl;
    
    // Friend function across classes
    compareShapes(rect1, circle1);
    
    std::cout << "\n" << std::string(50, '=') << std::endl;
    
    // Demonstrate static members and functions
    std::cout << "\n=== Static Members and Functions ===" << std::endl;
    std::cout << "Total Shapes created: " << Shape::getShapeCount() << std::endl;
    std::cout << "Total Rectangles: " << Rectangle::getRectangleCount() << std::endl;
    std::cout << "Total Circles: " << Circle::getCircleCount() << std::endl;
    std::cout << "Value of PI: " << Circle::getPI() << std::endl;
    
    // Demonstrate static function for comparison
    std::cout << "\n=== Static Function for Area Comparison ===" << std::endl;
    if (Shape::compareArea(rect1, circle1)) {
        std::cout << rect1.getName() << " has larger area than " << circle1.getName() << std::endl;
    } else {
        std::cout << circle1.getName() << " has larger area than " << rect1.getName() << std::endl;
    }
    
    // Demonstrate static function from MathOperations
    std::cout << "\n=== Calculating Total Area (Static Function) ===" << std::endl;
    double totalArea = MathOperations::calculateTotalArea(shapes, 4);
    std::cout << "Total area of all shapes: " << totalArea << std::endl;
    
    // Demonstrate friend function returning string
    std::cout << "\n=== Friend Function with Return Value ===" << std::endl;
    std::string combinedInfo = getCombinedInfo(rect1, circle1);
    std::cout << combinedInfo << std::endl;
    
    std::cout << "\n" << std::string(50, '=') << std::endl;
    
    // Final statistics
    std::cout << "\n=== Final Statistics ===" << std::endl;
    std::cout << "Shapes still active: " << Shape::getShapeCount() << std::endl;
    std::cout << "Rectangles still active: " << Rectangle::getRectangleCount() << std::endl;
    std::cout << "Circles still active: " << Circle::getCircleCount() << std::endl;
    
    std::cout << "\n=== Program End ===" << std::endl;
    return 0;
}