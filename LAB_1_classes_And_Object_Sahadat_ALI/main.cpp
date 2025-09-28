// main.cpp
#include <iostream>
#include <limits>
#include "Student.h"
#include "Rectangle.h"
#include "Voter.h"
#include "Temperature.h"
#include "Calculator.h"
#include "Product.h"

void pause() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void taskStudent() {
    Student s;
    s.getData();
    s.displayData();
}

void taskRectangle() {
    Rectangle r;
    r.setDimensions();
    r.display();
}

void taskVoter() {
    Voter v;
    v.getData();
    v.displayResult();
}

void taskTemperature() {
    Temperature t;
    t.inputAndConvert();
}

void taskCalculator() {
    float a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    int op;
    std::cout << "Choose operation: 1)add 2)sub 3)mul 4)div : ";
    std::cin >> op;
    float res;
    switch (op) {
        case 1: std::cout << "Result: " << Calculator::add(a,b) << "\n"; break;
        case 2: std::cout << "Result: " << Calculator::subtract(a,b) << "\n"; break;
        case 3: std::cout << "Result: " << Calculator::multiply(a,b) << "\n"; break;
        case 4:
            if (Calculator::divide(a,b,res))
                std::cout << "Result: " << res << "\n";
            else
                std::cout << "Error: Division by zero!\n";
            break;
        default: std::cout << "Invalid operation\n"; break;
    }
}

void taskProduct() {
    Product p;
    std::string name;
    double price;
    int qty;
    std::cout << "Enter product name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Enter price: ";
    std::cin >> price;
    std::cout << "Enter quantity: ";
    std::cin >> qty;

    bool ok = true;
    if (!p.setName(name)) { std::cout << "Invalid name.\n"; ok = false; }
    if (!p.setPrice(price)) { std::cout << "Invalid price.\n"; ok = false; }
    if (!p.setQuantity(qty)) { std::cout << "Invalid quantity.\n"; ok = false; }

    if (ok) {
        std::cout << "\nProduct stored successfully:\n";
        p.display();
    } else {
        std::cout << "Product not stored due to validation errors.\n";
    }
}

int main() {
    while (true) {
        std::cout << "\n=== OOP Week-1 Tasks ===\n";
        std::cout << "1. Student Record (Task 1)\n";
        std::cout << "2. Rectangle (Task 2)\n";
        std::cout << "3. Voting Eligibility (Task 3)\n";
        std::cout << "4. Temperature Converter (Task 4)\n";
        std::cout << "5. Calculator (Task 5)\n";
        std::cout << "6. Product (Encapsulation)\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose option: ";

        int choice;
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input\n";
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
            case 1: taskStudent(); pause(); break;
            case 2: taskRectangle(); pause(); break;
            case 3: taskVoter(); pause(); break;
            case 4: taskTemperature(); pause(); break;
            case 5: taskCalculator(); pause(); break;
            case 6: taskProduct(); pause(); break;
            case 0: std::cout << "Goodbye!\n"; return 0;
            default: std::cout << "Invalid choice\n"; break;
        }
    }

    return 0;
}
