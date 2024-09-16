//Satya Dulam
// Assignment 2(3.10) Invoice Class
//CIS 278
//Sept 9,2024

//importing programs to run code
#pragma once
#include <string>

using namespace std;

// setting up invoice class
class Invoice {
private:
    // keeping all class variables private
    string partNumber;
    string partDescript;
    int itemPrice;
    int itemQuant;

public:
    // setting up constructor for class Invoice
    explicit Invoice(string x, string y, int a, int b)
        : partNumber(x) // part number
        , partDescript(y) // part description
        , itemPrice(a) // price of part
        , itemQuant(b) // amount of parts 
    {};

    // preparing a setter and getter for variable representing the part number
    void setPartNumber(string x) {
        partNumber = x;
    }

    string getPartNumber() {
        return partNumber;
    }

    // preparing a setter and getter for variable representing the part description  
    void setPartDescript(string y) {
        partDescript = y;
    }

    string getPartDescript() {
        return partDescript;
    }


    // preparaing a setter and getter for variable presentating the price of the part
    // using an if statement to prevent the user from entering any negative numbers
    void setItemPrice(int a) {
        if (a >= 0) {
            itemPrice = a;
        }
        else {
            itemPrice = 0;
        }
    }

    int getItemPrice() {
        return itemPrice;
    }

    // preparing a setter and getter for variable presentating the amount of each part
    // using an if statement to prevent the user from entering any negative numbers 
    void setItemQuant(int b) {
        if (b >= 0) {
            itemQuant = b;
        }
        else {
            itemQuant = 0;
        }
    };

    int getItemQuant() {
        return itemQuant;
    }
    // setting up a number function that returns the cost of total parts being bought 
    int getInvoiceAmount() {
        return itemPrice * itemQuant;
    }
};
