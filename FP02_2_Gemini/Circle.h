#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    // Constructors
    Circle(double x, double y, double radius, const std::string& color = "black");
    Circle(const Point& center, double radius, const std::string& color = "black");

    // Getters
    double getRadius() const;

    // Setters
    void setRadius(double radius);

    // Area of the circle
    double getArea() const override;

    // Perimeter of the circle
    double getPerimeter() const override;

    // Check if two circles intersect
    bool intersects(const Circle& other) const;
};

#endif // CIRCLE_H
