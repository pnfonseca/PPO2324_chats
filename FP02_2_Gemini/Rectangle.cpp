#include "Rectangle.h"

Rectangle::Rectangle(double x, double y, double width, double height, const std::string& color) : Shape(color, Point(x, y)), width(width), height(height) {}
Rectangle::Rectangle(const Point& center, double width, double height, const std::string& color) : Shape(color, center), width(width), height(height) {}

double Rectangle::getWidth() const { return width; }
double Rectangle::getHeight() const { return height; }

void Rectangle::setWidth(double width) { this->width = width; }
void Rectangle::setHeight(double height) { this->height = height; }

double Rectangle::getArea() const override { return width * height; }

double Rectangle::getPerimeter() const override { return 2 * (width + height); }
