// Assignment 2 (3.10) (driver code)
//Satya Dulam 
//CIS 278
//Sept 9,2024

//setting up project for coding
#include <iostream>
#include <string>

//importing class Invoice 
#include "Invoice.h"

using namespace std;

// creating main driver code to test class Invoice 
int main()
{
    //creating object invoice with initial parameters of part number, part description, part price and part quantity
    Invoice invoice1{ "123","screwdriver",0, 0 };

    //prompting the user to enter a part they would like to buy
    cout << "Please enter the part you are buying:" << endl;
    string partDescript;
    getline(cin, partDescript);
    invoice1.setPartDescript(partDescript);

    // prompting the user to enter in the part number
    cout << "Please enter the part number:" << endl;
    string partNumber;
    getline(cin, partNumber);
    invoice1.setPartNumber(partNumber);

    // prompting the user to enter the price of the part
    cout << "Please enter the price of the part:" << endl;
    int itemPrice;
    cin >> itemPrice;
    invoice1.setItemPrice(itemPrice);

    // prompting the user to enter how many parts they are buying
    cout << "Please enter the quantity of part:" << endl;
    int itemQuant;
    cin >> itemQuant;
    invoice1.setItemQuant(itemQuant);

    // returning the total information from the class back to the user
    cout << "The total invoice amount for " << invoice1.getPartDescript() << "(" << invoice1.getPartNumber() << ") is $" << invoice1.getInvoiceAmount() << endl;

    cout << "Have a nice day" << endl;

}