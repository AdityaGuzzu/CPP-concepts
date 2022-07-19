/* A program to demonstrate a function with aguments and return value */
#include<iostream>
using namespace std;
int product(int x, int y)		//Function definition
{
	return x*y;			//Return value
}

int product(int,int);			//Global Function Declaration

int main()
{	
	cout<<"The product of 10 and 3 is "<<product(10,3);
}
