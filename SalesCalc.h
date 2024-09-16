//Satya Dulam
//CIS 278: Assignment 3 (4.15) Class SalesCalc
// september 15, 2024

#pragma once
class SalesCalc
{
    //the only variable used and initalized in the class is salesGross
private:
    double salesGross;

public:
    //constructor for when an object is made, an attribute needs to be given to the only parameter
    explicit SalesCalc(double x)
        : salesGross(x)
    {};
    // creating a setter and getter for the variable
    void setSalesGross(double x) {
        salesGross = x;
    }
    double getSalesGross() const {
        return salesGross;
    }
    // a function that returns a value based on the set value of salesGross
   
    double salesIncome() const {
        // if salesGross is less than 0, than the outcome returns 0 
        if (salesGross <= 0) {
            return 0;
        }
        // if the salesGross is above 0 but less than 200, then the outcome returns that value
        else if ((salesGross > 0) && (salesGross <= 200)) {
            return salesGross;
        }
        // if the sales gross is more than 200, then the outcome returns 200 plus 9% of the outcome
        else {
            return 200 + (salesGross * 0.09);
        }

    }
};

