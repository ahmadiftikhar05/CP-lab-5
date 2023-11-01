#include<iostream>
using namespace std;
int main()
{
	int z, num, sum = 1;
	cout << "Enter number = ";
	cin >> num;
	do
	{
		sum = sum * num ;
		num--;
	} while (num >= 1);
	cout << "Factorial = " << sum;
	return 0;
}