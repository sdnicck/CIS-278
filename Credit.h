#pragma once

// creating the class credit 
class Credit
{

    // parameters are intialized under private 
private:

    int accountNumber;
    double balance;
    double totalCharge;
    double totalCredit;
    double creditLimit;

    // public allows the user to set these parameters and access them again later 
public:
    // constructor used to allow the user to set certain parameters once the object using the class is created
    explicit Credit(int a, double b, double c, double d, double e)
        : accountNumber(a)
        , balance(b)
        , totalCharge(c)
        , totalCredit(d)
        , creditLimit(e)
    {};

    // getter and setter created for variable accountNumber
    void setAccountNumber(int a) {
        accountNumber = a;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    // getter and setter created for variable balance 
    // the setter only allows the variable to be 0 or greater 
    void setBalance(double b) {
        if (b <= 0) {
            balance = 0;
        }
        else {
            balance = b;
        }
    }

    double getBalance() {
        return balance;
    }

    // getter and setter created for totalCharge made
    void setTotalCharge(double c) {
        totalCharge = c;
    }

    double getTotalCharge() {
        return totalCharge;
    }

    // getter and setter created for totalCredit avaliable
    void setTotalCredit(double d) {
        totalCredit = d;
    }

    double getTotalCredit() {
        return totalCredit;
    }

    // getter and setter created for the credit limit of the account 
    void setCreditLimit(double e) {
        creditLimit = e;
    }

    double getCreditLimit() {
        return creditLimit;
    }

    // newBalance function used to calculate whether or not the balance and total purchases have exceeded the credit limit inputted
    // the function adds the total funds (balance) and charges then substracts them from avaliable credits
    double newBalance() {
        return balance + totalCharge - totalCredit;
    }
};

