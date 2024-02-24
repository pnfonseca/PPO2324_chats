#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

int main() {
    // Create different shapes
    Circle circle(1, 2, 3, "blue");
    Square square(4, 5, 2, "green");
    Rectangle rectangle(6, 7, 4, 3, "red");

    // Print information
    std::cout << "Circle:" << std::endl;
    std::cout << "  Color: " << circle.getColor() << std::endl;
    std::cout << "  Center: (" << circle.getCenter().getX() << ", " << circle.getCenter().getY() << ")" << std::endl;
    std::cout << "  Radius: " << circle.getRadius() << std::endl;
    std::cout << "  Area: " << circle.getArea() << std::endl;
    std::cout << "  Perimeter: " << circle.getPerimeter() << std::endl;

    std::cout << "Square:" << std::endl;
    std::cout << "  Color: " << square.getColor() << std::endl;
    std::cout << "  Center: (" << square.getCenter().getX() << ", " << square.getCenter().getY() << ")" << std::endl;
    std::cout << "  Side: " << square.getWidth() << std::endl; // Since it's a square, width and height are the same
    std::cout << "  Area: " << square.getArea() << std::endl;
    std::cout << "  Perimeter: " << square.getPerimeter() << std::endl;

    std::cout << "Rectangle:" << std::endl;
    std::cout << "  Color: " << rectangle.getColor() << std::endl;
    std::cout << "  Center: (" << rectangle.getCenter().getX() << ", " << rectangle.getCenter().getY() << ")" << std::endl;
    std::cout << "  Width: " << rectangle.getWidth() << std::endl;
    std::cout << "  Height: " << rectangle.getHeight() << std::endl;
    std::cout << "  Area: " << rectangle.getArea() << std::endl;
    std::cout << "  Perimeter: " << rectangle.getPerimeter() << std::endl;

    // Check intersection between circles
    if (circle.intersects(Circle(5, 5, 1, "yellow"))) {
        std::cout << "Circles intersect!" << std::endl;
    } else {
        std::cout << "Circles do not intersect." << std::endl;
    }

    return 0;
}
