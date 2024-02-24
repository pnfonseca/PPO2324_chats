#include "rectangle.h"

Rectangle::Rectangle(double x, double y, double w, double h, std::string c) : topLeft(x, y), width(w), height(h), color(c) {}

std::string Rectangle::getColor() const {
    return color;
}

Point Rectangle::getTopLeft() const {
    return topLeft;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setColor(std::string c) {
    color = c;
}

double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}
