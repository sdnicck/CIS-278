// Assignment  3(4.14).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Satya Dulam
//CIS 278
//september 15, 2024 


//imports added for a proper running program
#include <iostream>
#include <string>
#include <iomanip>

//import of class Credit
#include "Credit.h"

//used to help making running the program easier
using namespace std; 

//driver program used to calculate whether or not the spending limit and balance exceed the credit limit enter
int main()
{
    //initalizing parameters in new object balanceCheck created by class Credit
    Credit balanceCheck{ 0,0,0,0,0 };

    // initalizing parameters of program
    double balance;
    double totalCharge;
    double totalCredit;
    double creditLimit;

    int accountNumber;

    //setting up prompt for user to enter the loop by asking for an account number
    //input in is saved as a parameter (account number) for the object balanceCheck through class Credit
    cout << "Please enter your account number (-1 to quit): " << endl;
    cin >> accountNumber;
    balanceCheck.setAccountNumber(accountNumber);

    // if the user does not enter -1 they enter the loop which will ask for the rest of the questions (balance, charges, credits, and credit limit)
    while (accountNumber != -1) {

        // the user is prompted to enter their balance which is saved as a parameter for the object balanceCheck
        cout << "Please enter your current balance: " << endl;
        cin >> balance;
        balanceCheck.setBalance(balance);

        // the user is prompted to enter their charges  which is saved as a parameter for the object balanceCheck
        cout << "Please enter the total charges: " << endl;
        cin >> totalCharge;
        balanceCheck.setTotalCharge(totalCharge);

        // the user is prompted to enter their credit which is saved as a parameter for the object balanceCheck
        cout << "Please enter the total creidts: " << endl;
        cin >> totalCredit;
        balanceCheck.setTotalCredit(totalCredit);

        // the user is prompted to enter their credit limit which is saved as a parameter for the object balanceCheck
        cout << "Please enter the credit limit: " << endl;
        cin >> creditLimit;
        balanceCheck.setCreditLimit(creditLimit);

        // newBalance() then gets called to calculate the new balance on the users account
        // setprecision is used to keep the value at 2 deceimal places regardless of what the user enter 
        cout << "Your new balance is $ " << fixed << setprecision(2) << balanceCheck.newBalance() << endl;

        // if the new balance is greater than the credit limit then the output will show the account, credit limit, and balance again to show that the credit has been exceeded
        // to get the values they are called from the class Credit which saved the parameters for the object balanceCheck
        if (balanceCheck.newBalance() >= balanceCheck.getCreditLimit()) {
            cout << "Account: " << fixed << setprecision(2) << balanceCheck.getAccountNumber() << endl;
            cout << "Credit Limit: " << fixed << setprecision(2) << balanceCheck.getCreditLimit() << endl;
            cout << "Balance: " << fixed << setprecision(2) << balanceCheck.newBalance() << endl;
            cout << "Credit Limit Exceeded." << endl;
        }

        // the original promopt input is asked again, and they do not enter -1 the while loop will start again
        // only when the user enters -1 to the question of account number will the program end 
        cout << "Please enter your account number (-1 to quit): " << endl;
        cin >> accountNumber;
        balanceCheck.setAccountNumber(accountNumber);

    }
}
