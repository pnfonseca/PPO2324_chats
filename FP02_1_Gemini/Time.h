//
// Created by pf on 24-02-2024.
//

#ifndef GEMINI_TIME_H
#define GEMINI_TIME_H

#include <iostream>
#include <iomanip>

class Time {
public:
    // Default constructor initializes to 0
    Time() : hours(0), minutes(0), seconds(0) {}

    // Constructor with fixed values
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        // Input validation (optional)
        if (h < 0 || h >= 24 || m < 0 || m >= 60 || s < 0 || s >= 60) {
            throw std::invalid_argument("Invalid time values");
        }
    }

    // Display time in 11:59:59 format
    void displayTime() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }

    // Member function to add another Time object
    void addTime(const Time& other) {
        // Add seconds, carry over if needed
        seconds += other.seconds;
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }

        // Add minutes, carry over if needed
        minutes += other.minutes;
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }

        // Add hours, wrap around if needed
        hours += other.hours;
        hours %= 24;
    }

    // Setters
    void setHours(int hours) {
        if (hours < 0 || hours >= 24) {
            throw std::invalid_argument("Hours must be between 0 and 23");
        }
        this->hours = hours;
    }

    void setMinutes(int minutes) {
        if (minutes < 0 || minutes >= 60) {
            throw std::invalid_argument("Minutes must be between 0 and 59");
        }
        this->minutes = minutes;
    }

    void setSeconds(int seconds) {
        if (seconds < 0 || seconds >= 60) {
            throw std::invalid_argument("Seconds must be between 0 and 59");
        }
        this->seconds = seconds;
    }

    // Getters
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }

private:
    int hours;
    int minutes;
    int seconds;
};


#endif //GEMINI_TIME_H
