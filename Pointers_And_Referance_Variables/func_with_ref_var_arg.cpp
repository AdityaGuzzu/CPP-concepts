/*A program to demostrate functions which take reference variables as aruguments*/
#include<iostream>
using namespace std;
void swap(int &x, int &y)	//defining a function which takes reference variables as arguments and swaps the values
{
	int z;
	z = x;
	x = y;
	y = z;
}
void swap(int &, int &); 	//global declaration
int main()
{
	int x,y;
	int &x_cpy = x;
	int &y_cpy = y;
	cout<<"Before swapping "<<"x = "<<x<<"\ty = "<<y;
	swap(x_cpy,y_cpy);
	cout<<"\nx = "<<x<<"\ty = "<<y;
		
}