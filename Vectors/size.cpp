/*This file will demonstrate the size() member function of vectors
	What is it?
	This returns the size of the current vector
	RETURN VALUE: The size of the vector (the number of elements it has)
	PARAMETERS: NONE
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num_arr_1 = {2,3,4,5,6};	
	vector<int> num_arr_2 = {2,3,4};
	cout<<"The size of num arr 1 is : "<<num_arr_1.size();
	cout<<"\nThe size of num arr 2 is : "<<num_arr_2.size();
}