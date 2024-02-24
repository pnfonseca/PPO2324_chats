#include <iostream>
#include "Time.h"

int main() {
    // Create two initialized Time objects
    Time time1(12, 30, 45);
    Time time2(5, 10, 20);

    // Create an uninitialized Time object
    Time result;

    // Add time1 and time2 to result
    result.addTime(time1);
    result.addTime(time2);

    // Display the result
    std::cout << "Result time: " ;
    result.displayTime();
    std::cout << std::endl;

    return 0;
}