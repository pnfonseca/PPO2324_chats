#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // Constructors
    Rectangle(double x, double y, double width, double height, const std::string& color = "black");
    Rectangle(const Point& center, double width, double height, const std::string& color = "black");

    // Getters
    double getWidth() const;
    double getHeight() const;

    // Setters
    void setWidth(double width);
    void setHeight(double height);

    // Area of the rectangle
    double getArea() const override;

    // Perimeter of the rectangle
    double getPerimeter() const override;
};

#endif // RECTANGLE_H
