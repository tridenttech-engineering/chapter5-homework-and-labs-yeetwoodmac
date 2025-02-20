//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables;
		char membership = ' ';
		double shipFeesSTD = 4.99;
		double shipFeesDISC = 0.99;
		double orderSubTotal = 0.0;
		double orderTotal = 0.0;
		double orderTotalSHIPPED = 0.0;
		const double premiumDiscount = 0.10;
		const double stdDiscount = 0.05;
	// Process for calcualting total due, after member discounts.
			cout << "Please enter subtotal: ";
			cin >> orderSubTotal;
			cout << "Is the customer a Premier Club Member? (Y/N): ";
			cin >> membership;
		if (membership == 'Y' || membership == 'y'){
				orderTotal = orderSubTotal - (orderSubTotal * premiumDiscount);
		}
			else{
				orderTotal = orderSubTotal - (orderSubTotal * stdDiscount);
			}
		if(orderTotal > 99.99){
			orderTotalSHIPPED = orderTotal + shipFeesDISC;
			}
		else{
			orderTotalSHIPPED = orderTotal + shipFeesSTD;
		}
	//end if
		cout << fixed << setprecision(2);
		cout << "Order total: $" << orderTotalSHIPPED << endl;
		cout << "Subtotal before shipping; " << orderTotal << endl;
	

	return 0;
}	//end of main function