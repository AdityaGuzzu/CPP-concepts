#include<iostream>

int main()
{
	//Pointer that can point to an int
	int *ptr;
		
	/*
	In C and C++ you can create a scope by using the two flower braces. Any variable declared inside the 
	two flower braces can't be accessed outside it.
	*/

	{
		int x = 5;
		ptr = &x;
		std::cout<<"The value at the address of ptr is"<<*ptr;	//This prints the "Value at the address of ptr". Now its 5.
	}
	
	
	
	//Important. 
	/*
		Now, the variable X whose "address" we've assigned, no longer exists. But that doesn't mean the address
		itself diseappeared. See what happens: 
	*/

	std::cout<<std::endl<<"The value at the address of ptr is: "<<*ptr;
	//std::cout<<x;
}