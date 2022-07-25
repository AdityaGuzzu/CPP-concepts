/* in this file, we'll see the use of push_back member function of the vector 
	WHAT IT DOES?
	Adds a new element at the end of the vector
	PARAMETERS(1): The value to be added 
	RETURN VALUE: NONE(until there is successful memory allocation whenever required)
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> nums;
	/* NOTE: We cannot do: nums[0] = 1 to allocate the first element */
	nums.push_back(5);		//adds 5 to the vector which is currently empty. So 1st element is 5
	cout<<endl<<nums[0];
}