/*A program to demonstrate a function with arguments but no return value */
#include<iostream>
using namespace std;
void add(int x, int y)		//Function definition
{
	int z;			//A local variable with its scope within the func
	z = x + y;
	cout<<"\nThe sum of <<x<<" and "<<y<<" is "<<z;
}

void add(int,int); 		//Global declaration
int main()
{
	add(5,18);
	add(8,37);		//Function call	
}
	