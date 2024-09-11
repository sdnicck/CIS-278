// Assignment 3 (4.15).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Add two floating values to out puts 

#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

class SalesCalc {
private:
    double salesGross;

public:

    explicit SalesCalc(double x)
        : salesGross(x)
    {};

    void setSalesGross(double x) {
        salesGross = x;
    }
    double getSalesGross() const {
        return salesGross;
    }

    double salesIncome() const {
        if (salesGross <= 0) {
            return 0;
        }
        else if ((salesGross > 0) && (salesGross <= 200)) {
            return salesGross;
        }
        else {
            return 200 + (salesGross * 0.09);

        }

    }
};

int main()
{
  

    SalesCalc employee{0};

    double salesGross;

    cout << "Please enter sales in dollars(-1 to end): " << endl;
    cin >> salesGross;
    employee.setSalesGross(salesGross);

    while (salesGross != -1) {
        cout << "Your salary is: $" << fixed << setprecision(2) << employee.salesIncome() << endl;

        cout << "Please enter sales in dollars(-1 to end): " << endl;
        cin >> salesGross;
        employee.setSalesGross(salesGross);
    }
    
}
