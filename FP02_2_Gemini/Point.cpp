#include "Point.h"
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

double Point::distance(const Point& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}
