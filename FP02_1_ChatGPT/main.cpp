#include <iostream>
#include "Time.h"

int main() {

    // Create two initialized Time objects
    Time t1(1, 30, 55);
    Time t2(2, 15, 10);

    // Create an uninitialized Time object
    Time t3;

    // Add t1 and t2, store the result in t3
    t3 = t1; // Copy t1 to t3
    t3.addTime(t2); // Add t2 to t3

    // Display the result
    std::cout << "Time t3 after adding t1 and t2: ";
    t3.displayTime();

    return 0;
}
