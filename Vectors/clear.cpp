/*In this file, We'll see how clear() member function works
	--------------------------------------------------------------
	What does it do?
	It clears all the elements and reduces the size of the vector to 0.
	But this doesn't guarantee setting the capacity to 0.
	--------------------------------------------------------------
	PARAMETERS: NONE
	--------------------------------------------------------------
	RETURN VALUE: NONE
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr = {2,3,4,5,6,78,9,0,0};
	cout<<"The size of arr is : "<<arr.size();
	cout<<"\nThe capacity of arr is "<<arr.capacity();
	arr.clear();
	cout<<"\nThe size after clearing is : "<<arr.size();
	cout<<"\nThe capacity after clearing is : "<<arr.capacity();
}