//write include statements
#include <iostream>
#include "variables.h"



//write namespace using statement for cout

using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	
	double meal_amount;
	double tip_rate;
	double tax_amount;
	double tip_amount;
	double total;

	cout << "Enter meal amount" << endl;
	cin >> meal_amount;

	cout << "Enter tip percentage" << endl;
	cin >> tip_rate;

	//adjust tip_rate for output in case of decimal entry
	if (tip_rate < 1) 
	{
		tip_rate *= 100;
	}

	tax_amount = get_sales_tax_amount(meal_amount);
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;

	//raw double output
	cout << "\n--unformated results--" << endl;
	cout << "Meal amount :  " << meal_amount << endl;
	cout << "Tax amount :   " << tax_amount << endl;
	cout << "Tip % :        " << tip_rate << "%" << endl;
	cout << "Tip total :    " << tip_amount << endl; 
	cout << "Total :        " << total << "\n\n";

	for (int i = 0; i < 100; i++)
	{
		cout << "-";
		if (i == 49)
		{
			cout << "\n\n		Restaurant Reciept\n\n";
		}

	}
	
	//rounded to two decimals
	printf("%s %.2F",  "\n\nMeal amount :    ", meal_amount);
	printf("%s %.2F",    "\nTax amount :     ", tax_amount);
	printf("%s %.2F %s", "\nTip :            ", tip_rate,"%");
	printf("%s %.2F",    "\nTip total :      ", tip_amount);
	printf("%s %.2F",    "\nTotal :          ", (meal_amount + tax_amount + tip_amount));

	return 0;
}




