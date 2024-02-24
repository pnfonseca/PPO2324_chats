#include "square.h"

Square::Square(double x, double y, double s, std::string c) : topLeft(x, y), side(s), color(c) {}

std::string Square::getColor() const {
    return color;
}

Point Square::getTopLeft() const {
    return topLeft;
}

double Square::getSide() const {
    return side;
}

void Square::setColor(std::string c) {
    color = c;
}

double Square::area() const {
    return side * side;
}

double Square::perimeter() const {
    return 4 * side;
}
