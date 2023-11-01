#include<iostream>
using namespace std;
int main()
{
	float num_1, num_2;
	char oper, choice;

	do
	{
		cout << "Enter first Number,Operator and Second number : ";
		cin >> num_1 >> oper >> num_2;

	  switch (oper)
	  {
	    case'+':
		{
			cout << "Addition = " << num_1 + num_2;
			break;
		}
		case'-':
		{
			cout << "Subtraction = " << num_1 - num_2;
			break;
		}
		case '*':
		{
			cout << "Multiplication = " << num_1 * num_2;
			break;
		}
		case'/':
		{
			cout << "Division = " << num_1 / num_2;
			break;
		}
		default:
		{
			cout << "Invalid input";
		}
	  }
		cout << "\nDo Another (y/n) : ";
		cin >> choice;
	}
	  while (choice == 'Y' || choice == 'y');
	 
  return 0;
}