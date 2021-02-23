//Write the include statement for decisions.h here
#include "decision.h"
//Write namespace using statements for cout and cin

int main() 
{
	cout << "Grade conversion" << endl;
	int grade;
	bool run = true;
	while (run == true)
	{
		cout << "\nEnter a numeric grade ";
		cin >> grade;

		if (grade >= 0 && grade <= 100)
			{
				cout << "\nLetter grade using if = " << get_letter_grade_using_if(grade);
				cout << "\nLetter grade using switch = " << get_letter_grade_using_switch(grade);
			}
		else {
			cout << "\nThat number is out of range, enter a number between 0 and 100.";
		}

		cout << "\n\nEnter 'y' to continue ";
		string answer;
		cin >> answer;
		if (!(answer == "y" || answer == "Y"))
		{
			run = false;
		}
	}

	return 0;
}

