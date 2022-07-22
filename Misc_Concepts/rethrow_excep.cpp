/*A program to demonstrate re-throwing an exception */
#include<iostream>
using namespace std;

void int_excep(int x, char y)		//Lets call the func as int_excep cuz it handles integer exceptions within it
{	
	try
	{
		if(x==0)
		{
			throw(x);
		}
		else if(y == 'n')
		{
			throw(y);
		}
	}
	catch(int x)
	{
		cout<<"\nX = 0";
	}	
}
void int_excep(int,char);
int main()
{
	try
	{
		int_excep(5,'n');				//we are throwing a character exception which is not handled by the function
	}			
	catch(char c)						//SO the control returns to this catch block. NOTE: In this case, anything written after the function call in the above try block won't be executed
	{
		cout<<endl<<"The given character is n";	
	}
}