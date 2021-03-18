//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using namespace std;



int main() 
{
	string choice;
	do
	{
		cout << "DNA Program";
		string dnaString;
		cout << "\n\nWhat would you like to do?\n1) Get GC Content\n2) Get DNA Complement\n\nEnter 1 or 2: ";
		cin >> choice;
		cout << "\n\nPlease enter a DNA string: ";
		cin >> dnaString;
		string result;

		
		cout << "\n";

		if (choice == "1")
		{	
			cout << "The GC content of the DNA string " + dnaString + " is " << (get_gc_content(dnaString) * 100.00)<< "%";
		}

		else if (choice == "2")
		{
			cout << "The complete strand of " + dnaString + " is:\n\n" + dnaString + "\n" << get_dna_complement(dnaString);
		}
		else
		{
			cout << "Invalid input";
		}

		cout << "\n\nEnter y or Y if you would like to do another task: ";
		cin >> choice;
		

	}while(choice == "y" || choice == "Y");
	
	return 0;
}




