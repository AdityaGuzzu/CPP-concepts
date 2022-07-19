/*A program to demonstrate armstrong numbers */
#include<iostream>
using namespace std;
int expo(int num, int digits)
{
	int ret_val = 1;
	for(int i=0; i<digits; i++)
	{
		ret_val = (ret_val*num);
	}
	return ret_val;
}
int expo(int,int);
int main()
{
	int num;			
	int fake_num;			//A copy of the number to calc
	int digits=0;			//A  variable which stores the number of digits
	int sum = 0;			//A variable to store the sum of the exp of the digits
	cout<<"Enter the number";
	cin>>num;
	fake_num = num;
	while(fake_num != 0)		//A loop to find out the number of the digits
	{
		fake_num = fake_num/10;
		digits += 1;
	}

	fake_num = num;

	while(num != 0)
	{
		int rem = num %10;
		sum += expo(rem, digits);
		num = num/10;
	}
	if(fake_num == sum)
	{
		cout<<endl<<fake_num<<" is an armstrong number ";
	}
	else
	{
		cout<<endl<<fake_num<<" is not an armstrong number";
	}
}