// Product.h
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    std::string name;
    double price;
    int quantity;
public:
    Product();
    // setters with validation
    bool setName(const std::string &n); // returns false if invalid
    bool setPrice(double p);
    bool setQuantity(int q);
    // getters
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
    void display() const;
};

#endif // PRODUCT_H
