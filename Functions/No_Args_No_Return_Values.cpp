/*A program to demonstrate a function with no arguments and return value*/
#include<iostream>
using namespace std;
void welcome()				//Function definition
{
	cout<<"\nWelcome to function";
}

int main()
{
	void welcome();			//Function declaration
	welcome();			//Function call
	welcome();	
}