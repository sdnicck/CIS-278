// Assignment 2 (3.12) (driver program)
//Satya Dulam 
//CIS 278
//Sept 8, 2024

// setting up code with iosteam, string, date class and std;
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

//
int main()
{
    // object date1 is created and intialized with 1 on each parameter 
    Date date1{ 1,1,1 };

    // the user enters a day, month, and year and each variable gets set as a parameter for the object 
    cout << "Please enter a day" << endl;
    int day;
    cin >> day;
    date1.setDay(day);

    cout << "Please enter a month" << endl;
    int month;
    cin >> month;
    date1.setMonth(month);

    cout << "Please enter a year" << endl;
    int year;
    cin >> year;
    date1.setYear(year);

    // then the program provides a string with the date 
    cout << date1.displayDate() << endl;
}