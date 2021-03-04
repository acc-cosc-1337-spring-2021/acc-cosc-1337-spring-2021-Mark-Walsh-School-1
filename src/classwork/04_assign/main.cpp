//write includes statements
#include <iostream>;
#include "loops.h";
//write using statements for cin and cout
using namespace std;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{

	string run = "y";
	int num;
	string numInput;

	do
	{
		bool validInput = false;
		cout << "\nEnter a whole number between 1 and 10" << endl;
		
		while(validInput == false)
		{

			cin >> num;

			if(num >= 1 && num <= 10)
			{
				validInput = true;
			}
			else
			{
				cout << "\nInvalid input, please enter a whole number between 1 and 10" << endl;
			}

		}

		cout << "\nThe factorial of " << num << " is " << factorial(num) << endl;

		cout << "Enter 'y' to continue ";
		cin >> run;
	} while (run == "y" || run == "Y");
	

	return 0;
}