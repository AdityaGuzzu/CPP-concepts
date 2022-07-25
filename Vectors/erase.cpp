/*This file contains the operation of the erase function
	-----------------------------------------------------------
	What does it do?
	This function removes either a single element or a range of elements ([first,last))
	-----------------------------------------------------------
	PARAMETERS: takes two iterators. The first one points to the first and the second pointing to the last element of the required range
	-----------------------------------------------------------
	RETURN VALUE: refer to https://cplusplus.com/reference/vector/vector/erase/
	-----------------------------------------------------------
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr = {0,1,2,3,4,5,6,7};				//initialise the array
	arr.erase(arr.begin(),arr.begin()+5);				//Erase the first five elements
	for(int i = 0; i<arr.size();i++)
	{
		cout<<"\t"<<arr[i];
	}
	
}