//Satya Dulam
//CIS278: Assignment 1 (2.29)
// Sept 1, 2024

// priming steps for easier computations
#include <iostream>

using namespace std;

//declaring main program
int main()

{
    // declaring all variables
    int number{ 0 };
    int square{ 0 };
    int cube{ 0 };


    //setting an inital title for each value to be displayed under
    cout << "Integer\tSquared\tCubed" << endl;

    // using a while loop to continuosly add new values to each column of the table under integer 10 is reached
    while (number != 10) {
        // variable number is used as a counter and adds 1 for each time the program runs through the loop, creating a new integer for each loop
        number += 1;
        // variable square takes the number of the current loop and raises it to the power of two
        square = number * number;
        // variable cube takes number of the current loop and raises it to the power of three using the variable square
        cube = square * number;
        // each calculated value is displayed under the proper column until the loop is terminated 
        cout << number << "\t" << square << "\t" << cube << endl;
    }




}

