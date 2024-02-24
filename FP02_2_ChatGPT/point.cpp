#include "point.h"

Point::Point(double x_val, double y_val) : x(x_val), y(y_val) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}
