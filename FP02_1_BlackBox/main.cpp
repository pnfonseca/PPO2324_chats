#include "Time.h"
#include <iostream>

int main() {
    Time t1(11, 59, 59);
    Time t2(1, 2, 3);

    t1.display();
    t2.display();

    Time t3 = t1.add(t2);
    t3.display();

    t1.setHours(23);
    t1.setMinutes(59);
    t1.setSeconds(59);
    t1.display();

    Time tx(0,2,0); 
    t1 = t1.add(tx);
    t1.display();

    return 0;
}