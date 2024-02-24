#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point(double x, double y);

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(double x);
    void setY(double y);

    // Distance between two points
    double distance(const Point& other) const;
};

#endif // POINT_H
