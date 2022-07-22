/*A program to demonstrate class templates*/
#include<iostream>
using namespace std;
template<class T>			//Template syntax. T is treated like a data type
class test					//test is the class name here. We can create our own object names
{
	public:
	T x;					//x is of type T					
	test() {cout<<"\n x  = "<<x;}
};

int main()
{
	test<int> cls;			//We've given T = int. Name of the object is cls. Its an instance of test
}