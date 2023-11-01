#include<iostream>
using namespace std;
int main()
{
	int num = 1;
	do
	{
		cout << num << " ";
		num = num * 2;

	} 
	while (num <= 512);
  return 0;
}