// Assignment 3 (4.15).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Satya Dulam
//CIS 278: Assignment 3(4.15)
//september 15, 2024

//imports to help run the program
#include <iostream>
#include <string>
#include<iomanip>

//importing class "SalesCalc" to do calculations
#include "SalesCalc.h"

//making coding easier 
using namespace std;

//starting main program to calculate how much sales commission the person makes based on their gross sales 
int main()
{
    //creating object to store all inputs and parameters
    SalesCalc employee{0};

    //initalzing variable
    double salesGross;

    //having the user enter an inital sales amount and saving it under salesGross
    cout << "Please enter sales in dollars(-1 to end): " << endl;
    cin >> salesGross;
    employee.setSalesGross(salesGross);

    //creating a loop that will end once the user enters -1, however until then the user can enter in as many sales as they want and the output will produce a commission value
    while (salesGross != -1) {
        //producing an output that shows the user what their sales commission is using object.saleIncome
        //object.salesIncome() produces a number that is 200 of salesGross plus 9% of salesGross
        // setprecision(2) will only out put 2 decimal places, no matter how many decimal places are initially entered
        cout << "Your salary is: $" << fixed << setprecision(2) << employee.salesIncome() << endl;

        //the user is prompted again to enter a gross sales amount and the value is returned to the while loop 
        cout << "Please enter sales in dollars(-1 to end): " << endl;
        cin >> salesGross;
        employee.setSalesGross(salesGross);
    }
    
}
