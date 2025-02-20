//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//declare variables
	double priceItem1 = 0.0;
	double priceItem2 = 0.0;
	double totalDue = 0.0;
	const double discount = 0.5;
//enter input data
	cout << "Enter price of item 1: ";
	cin >> priceItem1;
	cout << "Enter price of item 2: ";
	cin >> priceItem2;
//calculate total due
	if (priceItem1 >= priceItem2){
		totalDue = priceItem1 + (priceItem2 * discount);
	}
	else
		totalDue = priceItem2 + (priceItem1 * discount);

//end if
	cout << fixed << setprecision(2);
	cout << "Total due: $" << totalDue << endl;
	
	return 0;
}	//end of main function