// Product.cpp
#include "Product.h"
#include <iostream>

Product::Product() : name(""), price(0.0), quantity(0) {}

bool Product::setName(const std::string &n) {
    if (n.empty()) return false;
    name = n;
    return true;
}

bool Product::setPrice(double p) {
    if (p <= 0.0) return false;
    price = p;
    return true;
}

bool Product::setQuantity(int q) {
    if (q < 0) return false;
    quantity = q;
    return true;
}

std::string Product::getName() const { return name; }
double Product::getPrice() const { return price; }
int Product::getQuantity() const { return quantity; }

void Product::display() const {
    std::cout << "Product Name: " << name << "\n";
    std::cout << "Price: " << price << "\n";
    std::cout << "Quantity: " << quantity << "\n";
}
