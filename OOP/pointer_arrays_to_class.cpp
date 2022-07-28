/* In this file, we'll see what happens when we pass an array of pointers of the same 
type as the object to a member function of the object*/
#include<iostream>
using namespace std;
class A
{	
	private:
	int x;
	public:
	A(int x): x(x) {}
	void showvals(A *arr[],int size)
	{
		for(int i=9;i<size;i++)
		{
			cout<<endl<<"X = "<<arr[i]->x;
		}
	}
};

int main()
{
	A *array[] ={
	new obj1(0),
	new obj2(1),
	new obj2(2)
		}
	
}