#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point(double x_val, double y_val);

    double getX() const;
    double getY() const;
};

#endif /* POINT_H */
