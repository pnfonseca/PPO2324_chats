#include "Time.h"
#include <iostream>

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

void Time::display() const {
    std::cout << (hours < 10 ? "0" : "") << hours << ":"
              << (minutes < 10 ? "0" : "") << minutes << ":"
              << (seconds < 10 ? "0" : "") << seconds << std::endl;
}

Time Time::add(const Time& other) const {
    int h = hours + other.hours;
    int m = minutes + other.minutes;
    int s = seconds + other.seconds;

    s += m / 60;
    m %= 60;
    h += s / 60;
    s %= 60;
    h %= 24;

    return Time(h, m, s);
}

void Time::setHours(int h) {
    if (h >= 0 && h < 24) {
        hours = h;
    } else {
        hours = 0;
    }
}

void Time::setMinutes(int m) {
    if (m >= 0 && m < 60) {
        minutes = m;
    } else {
        minutes = 0;
    }
}

void Time::setSeconds(int s) {
    if (s >= 0 && s < 60) {
        seconds = s;
    } else {
        seconds = 0;
    }
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

int Time::getSeconds() const {
    return seconds;
}