#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    // Constructor
    Square(double x, double y, double side, const std::string& color = "black");
    Square(const Point& center, double side, const std::string& color = "black");
};

#endif // SQUARE_H
