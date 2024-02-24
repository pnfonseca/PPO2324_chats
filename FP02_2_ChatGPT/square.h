#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "point.h"

class Square {
private:
    std::string color;
    Point topLeft;
    double side;

public:
    Square(double x, double y, double s, std::string c);

    std::string getColor() const;
    Point getTopLeft() const;
    double getSide() const;

    void setColor(std::string c);

    double area() const;
    double perimeter() const;
};

#endif /* SQUARE_H */
