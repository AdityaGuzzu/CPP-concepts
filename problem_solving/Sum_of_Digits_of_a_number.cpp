/* A program to demonstrate the sum of digits of a number */
#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum = 0;
	cout<<"Enter an integer: ";
	cin>>num;
	while(num != 0)
	{
		sum += (num%10);
		num = num/10;
	}
	cout<<"The sum of digits is "<<sum;
}