#include "Circle.h"
#include <cmath>

Circle::Circle(double x, double y, double radius, const std::string& color) : Shape(color, Point(x, y)), radius(radius) {}
Circle::Circle(const Point& center, double radius, const std::string& color) : Shape(color, center), radius(radius) {}

double Circle::getRadius() const { return radius; }

void Circle::setRadius(double radius) { this->radius = radius; }

double Circle::getArea() const override { return M_PI * pow(radius, 2); }

double Circle::getPerimeter() const override { return 2 * M_PI * radius; }

bool Circle::intersects(const Circle& other) const {
    return center.distance(other.center) < radius + other.radius;
}
