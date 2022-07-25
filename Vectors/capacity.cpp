/*This file has the use of capacity member function
	---------------------------------------------------------
	what does it do?
	returns the number of memory units allocated to the vector
	----------------------------------------------------------
	RETURN VALUE: The number of elements it can currently hold.
	----------------------------------------------------------
	PARAMETERS: NONE
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr1 = {2};
	cout<<"The capacity of arr 1 is "<<arr1.capacity();
	vector<int> arr2 = {2,3,45,6,6,77,8,88,5,6,7};
	cout<<"\nThe capacity of arr 2 is "<<arr2.capacity();
}