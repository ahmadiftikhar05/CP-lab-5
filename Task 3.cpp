#include<iostream>
using namespace std;
int main()
{
	int dec_num, oct_num,i=0;
	int number[50];
	cout << "Enter number = ";
	cin >> dec_num;
	do
	{
	 number[i] = dec_num % 8;
		dec_num = dec_num / 8;
		i++;
	}
	while (dec_num >= 1);
	
	i = i - 1;
	do
	{
		cout << number[i];
		i--;
	} while (i >= 0);
	
	return 0;
}