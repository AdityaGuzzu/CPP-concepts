/*A program to demonstrate function templates*/
#include<iostream>
using namespace std;
template<class T>
T add(T x, T y)
{
	return x+y;
}

int main()
{
	cout<<endl<<add<int>(6,7);		//Function add with type int
	cout<<endl<<add<char>('a','b');		//Same function add with type char
}