#include <iostream>
#include "circle.h"
#include "square.h"
#include "rectangle.h"

int main() {
    // Test the classes
    Circle c1(0, 0, 5, "red");
    Circle c2(8, 8, 4, "blue");

    std::cout << "Circle 1 Area: " << c1.area() << std::endl;
    std::cout << "Circle 2 Perimeter: " << c2.perimeter() << std::endl;

    std::cout << "Circle 1 intersects Circle 2: " << (c1.intersect(c2) ? "Yes" : "No") << std::endl;

    Square s1(0, 0, 5, "green");
    Rectangle r1(0, 0, 4, 6, "yellow");

    std::cout << "Square 1 Area: " << s1.area() << std::endl;
    std::cout << "Rectangle 1 Perimeter: " << r1.perimeter() << std::endl;

    return 0;
}
