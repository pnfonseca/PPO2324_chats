#include "circle.h"
#include <cmath>

Circle::Circle(double x, double y, double r, std::string c) : centre(x, y), radius(r), color(c) {}

Circle::Circle(Point center, double r, std::string c) : centre(center), radius(r), color(c) {}

std::string Circle::getColor() const {
    return color;
}

Point Circle::getCentre() const {
    return centre;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setColor(std::string c) {
    color = c;
}

double Circle::area() const {
    return M_PI * radius * radius;
}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

bool Circle::intersect(const Circle& other) const {
    double distance = sqrt(pow(other.getCentre().getX() - centre.getX(), 2) +
                           pow(other.getCentre().getY() - centre.getY(), 2));
    return distance < (radius + other.getRadius());
}
