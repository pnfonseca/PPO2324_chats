#include "Shape.h"

Shape::Shape(const std::string& color, const Point& center) : color(color), center(center) {}

std::string Shape::getColor() const { return color; }
Point Shape::getCenter() const { return center; }

void Shape::setColor(const std::string& color) { this->color = color; }
void Shape::setCenter(const Point& center) { this->center = center; }
