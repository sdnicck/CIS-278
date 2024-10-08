//Satya Dulam
//CIS278: Assignment 1 (2.19)
//9/1/24
// objective: determine the sum, product, average, min and max of three inputted integters

//set up for easier programing based on class videos
#include <iostream>

using namespace std;

// call to main program
int main() {

    // declaring variables 
    int number1{ 0 };
    int number2{ 0 };
    int number3{ 0 };
    int sum{ 0 };
    int average{ 0 };
    int product{ 0 };

    //allowing the user to enter in three integers and setting them as variables
    cout << "Input your three integers: \n";
    cin >> number1 >> number2 >> number3;
    // creating a sum of the integers
    sum = number1 + number2 + number3;
    // finding the average of the variables using the previous sum
    average = sum / 3;
    // finding the product of all of the integers entered as variables
    product = number1 * number2 * number3;

    // displaying the outputs of all computations
    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl;

    // using if/else statements to find the largest and smallest value of the integers entered
    // finding the minimum value from all of the integers entered
    if (number1 <= number2 && number1 <= number3) {
        cout << "Min is " << number1 << endl;
    }
    else if (number2 <= number1 && number2 <= number3) {
        cout << "Min is " << number2 << endl;
    }
    else {
        cout << "Min is " << number3 << endl;
    }

    // finding the maximum value from all of the integers entered
    if (number1 >= number2 && number1 >= number3) {
        cout << "Max is " << number1 << endl;
    }
    else if (number2 >= number1 && number2 >= number3) {
        cout << "Max is " << number2 << endl;
    }
    else {
        cout << "Max is " << number3 << endl;
    }

}