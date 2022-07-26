/* A program to demonstrate the back member function of the vector
	What does it do?
	
	--------------------------------------------------------
	PARAMETERS: NONE
	--------------------------------------------------------
	RETURN TYPE: A reference to the last element in the vector
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num_arr = {2,3,4,5,6,7,8};
	cout<<num_arr.back();			//we will get 8 as the output
}