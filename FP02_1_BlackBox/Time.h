#ifndef TIME_H
#define TIME_H

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor that initializes the data to 0
    Time();

    // Constructor that initializes the data to fixed values
    Time(int h, int m, int s);

    // Member function to display the time in 11:59:59 format
    void display() const;

    // Member function to add another Time object to the current object
    Time add(const Time& other) const;

    // Setter functions
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    // Getter functions
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
};

#endif