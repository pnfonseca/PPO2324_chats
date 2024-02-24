#include "Square.h"

Square::Square(double x, double y, double side, const std::string& color) : Rectangle(x, y, side, side, color) {}
Square::Square(const Point& center, double side, const std::string& color) : Rectangle(center, side, side, color) {}
