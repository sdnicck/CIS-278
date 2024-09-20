// Assignment 4 (5.17).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int productNum{ 0 };
	int productAmount{ 0 };
	double productOneTotal{ 0 };
	double productTwoTotal{ 0 };
	double productThreeTotal{ 0 };
	double productFourTotal{ 0 };
	double productFiveTotal{ 0 };

	double PROD_ONE{ 2.98 };
	double PROD_TWO{ 4.50 };
	double PROD_THREE{ 9.98 };
	double PROD_FOUR{ 4.49 };
	double PROD_FIVE{ 6.87 };

	cout << "Product 1: $2.98\nProduct 2: $4.50\nProduct 3: $9.98\nProduct 4: $4.49\nProduct 5: $6.87\n " << endl;

	cout << "Please enter the product you would like to buy (enter -1 to end): " << endl;
	cin >> productNum;

	while (productNum != -1) {

		cout << "Please enter the quantity of product to purchase: " << endl;
		cin >> productAmount;


		switch (productNum) {
		case 1:
			productOneTotal += PROD_ONE * productAmount;
			break;

		case 2:
			productTwoTotal += PROD_TWO * productAmount;
			break;

		case 3:
			productThreeTotal += PROD_THREE * productAmount;
			break;

		case 4:
			productFourTotal += PROD_FOUR * productAmount;
			break;

		case 5:
			productFiveTotal += PROD_FIVE * productAmount;
			break;
		}
		cout << "Please enter the product you would like to buy (enter -1 to end): " << endl;
		cin >> productNum;
	}

	double totalPurchase = productFiveTotal + productFourTotal + productThreeTotal  + productTwoTotal + productOneTotal;

	cout << "The total purchase price is $" << fixed << setprecision(2) << totalPurchase << endl;
}


