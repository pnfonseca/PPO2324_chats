//
// Created by pf on 24-02-2024.
//

#ifndef FP_02_CHAT_TIME_H
#define FP_02_CHAT_TIME_H

#include <iostream>
#include <iomanip>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize time to 0
    Time() : hours(0), minutes(0), seconds(0) {}

    // Constructor to initialize time to specific values
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Getters
    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    // Setters
    void setHours(int h) {
        hours = h;
    }

    void setMinutes(int m) {
        minutes = m;
    }

    void setSeconds(int s) {
        seconds = s;
    }

    // Display time in HH:MM:SS format
    void displayTime() const {
        std::cout << std::setfill('0') << std::setw(2) << hours << ":"
                  << std::setw(2) << minutes << ":"
                  << std::setw(2) << seconds << std::endl;
    }

    // Add another Time object to the current object
    void addTime(const Time& other) {
        seconds += other.seconds;
        minutes += other.minutes + seconds / 60;
        hours += other.hours + minutes / 60;

        seconds %= 60;
        minutes %= 60;
        hours %= 24;
    }
};



#endif //FP_02_CHAT_TIME_H
