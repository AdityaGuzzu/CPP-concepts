/*A program to demonstrate the declaration and definition of arrays in C++ */
/* DEFINITION: An array is defined as a fixed-size sequential collection of variables
		of homogeneous data types */
#include<iostream>
using namespace std;
int main()
{
	int arr1[] = {2,4,5,6};	//we can omit the size of the array if we are specifying the elements immediately
	int arr2[5];		//If we are not specifying the array elements, we MUST mention the size of the array
	arr2[0] = 1;
	cout<<arr2[0]; 		//The first element is accessed by number 0. The second element by 1 and so on
}