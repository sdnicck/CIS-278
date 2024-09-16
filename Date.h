// Assignment 2 (3.12) (class Date)
//Satya Dulam 
//CIS 278
//Sept 8, 2024

// setting up code with string and std;
#pragma once
#include <string>

using namespace std;

//delcaring classs Date with month, day, and year parameters
class Date {
    // all parameter variables are intialized under private
private:
    int month;
    int day;
    int year;

public:
    // constructor intializes all the variables in new object
    explicit Date(int x, int y, int z)
        :month(x)
        , day(y)
        , year(z)
    {};

    // getter and setter created for month
    // only numbers between 1-12 are able to be set otherwise it is defaulted to 1 
    void setMonth(int x) {
        if ((x > 12) || (x < 1)) {
            month = 1;
        }
        else {
            month = x;
        }
    }

    int getMonth() {
        return month;
    }
    // getter and setter created for variable day
    void setDay(int y) {
        day = y;
    }

    int getDay() {
        return day;
    }
    // getter and setter created for variable year 
    void setYear(int z) {
        year = z;
    }

    int getYear() {
        return year;
    }

    // member function displayDate created to show the user a string of the date 
    string displayDate() {
        string date = "The date is ";
        string x = to_string(month);
        string y = to_string(day);
        string z = to_string(year);
        string slash = "/";
        string fullDate = date + x + slash + y + slash + z;
        return fullDate;
    }
};

