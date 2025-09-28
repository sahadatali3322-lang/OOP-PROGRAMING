// Temperature.h
#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature {
private:
    double celsius;
public:
    Temperature();
    void setCelsius(double c);
    double toFahrenheit() const;
    void inputAndConvert(); // convenience to input and print
};

#endif // TEMPERATURE_H
