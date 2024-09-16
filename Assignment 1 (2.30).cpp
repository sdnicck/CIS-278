//Satya Dulam
//CIS278: Assignment 1 (2.30)
// Sept 1, 2024
// objective: using the user's weight in kilograms and height in centimeters, determine their BMI and weight classification

// priming code for easier computations
#include <iostream>

using namespace std;

// declaring main def
int main()
{
    // delcaring all variables
    float weight{ 0 };
    float height{ 0 };
    float BMI{ 0 };

    // collecting variables weight and height from user
    cout << "Please enter your weight in kilograms: " << endl;
    cin >> weight;
    cout << "Please enter your height in centimeters: " << endl;
    cin >> height;

    // height to my knowledge is usually collected in centimeters so centimeters is converted to meters 
    height = height / 100;

    //BMI is calculated using entered weight and calulacted height
    BMI = weight / (height * height);

    // displaying to the user the ranges of weight based on BMI
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5\nNormal:between 18.5 and 24.9\nOverweight:between 25 and 29.9\nObese: 30 or greater\n" << endl;

    // using the BMI calculated to show their weight range for them
    if (BMI < 18.5) {
        cout << "Your BMI value " << BMI << " shows you are underweight\n";
    }
    else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "Your BMI value " << BMI << " shows you are normal\n";
    }
    else if (BMI >= 25 && BMI <= 29.9) {
        cout << "Your BMI value " << BMI << " shows you are overweight\n";
    }
    else {
        cout << "Your BMI value " << BMI << " shows you are obese\n";
    }

}
