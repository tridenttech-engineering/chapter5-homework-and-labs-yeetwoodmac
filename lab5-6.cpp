//lab5-6.cpp - displays a service charge, which is 1%
//of the purchase price; however, an additional $5 service
//charge should be added to code 2 purchases
//Created/revised by <Tyler Sharer> on <02/20/2025>

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
	int code = 0;
	double purchase = 0.0;
	double serviceChg = 0.0;

	//enter input data
	cout << "Enter code: ";
	cin >> code;
	cout << "Purchase price: ";
	cin >> purchase;

	//calculate service charge
	serviceChg = purchase * 0.01;
	//add $5 to code 2 purchases
	if (code == 2)
		serviceChg = serviceChg + 5;
	//end if

	//display service charge
	cout << fixed << setprecision(2);
	cout << "Service charge: " << serviceChg << endl;
	return 0;
}   //end of main function
