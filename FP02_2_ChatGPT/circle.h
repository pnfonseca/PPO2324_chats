#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "point.h"

class Circle {
private:
    std::string color;
    Point centre;
    double radius;

public:
    Circle(double x, double y, double r, std::string c);
    Circle(Point center, double r, std::string c);

    std::string getColor() const;
    Point getCentre() const;
    double getRadius() const;

    void setColor(std::string c);

    double area() const;
    double perimeter() const;

    bool intersect(const Circle& other) const;
};

#endif /* CIRCLE_H */
