#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "point.h"

class Rectangle {
private:
    std::string color;
    Point topLeft;
    double width;
    double height;

public:
    Rectangle(double x, double y, double w, double h, std::string c);

    std::string getColor() const;
    Point getTopLeft() const;
    double getWidth() const;
    double getHeight() const;

    void setColor(std::string c);

    double area() const;
    double perimeter() const;
};

#endif /* RECTANGLE_H */
