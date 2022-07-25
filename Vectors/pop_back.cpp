/*This file has the demonstration of pop_back() member function.
	What is it?
	removes the last element of the vector.
	PARAMETERS: NONE
	RETURN TYPE: NONE
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> nums = {2,3,4,5};	//Initialised the vector
	cout<<"The size is : "<<nums.size();
	nums.pop_back();			//called the pop_back function
	cout<<"\nThe size is now : "<<nums.size();
}