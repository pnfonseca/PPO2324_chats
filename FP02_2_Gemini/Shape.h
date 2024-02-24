#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape {
protected:
    std::string color;
    Point center;

public:
    // Constructor
    Shape(const std::string& color, const Point& center);

    // Getters
    std::string getColor() const;
    Point getCenter() const;

    // Setters
    void setColor(const std::string& color);
    void setCenter(const Point& center);

    // Virtual methods for area and perimeter (pure virtual for abstract Shape)
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

#endif // SHAPE_H
