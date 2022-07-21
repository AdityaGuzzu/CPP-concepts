/* A program to demonstrate inheritance using class templates */
#include<iostream>
using namespace std;
template<class T>		//template
class parent			//parent class	
{
	private:
	T x;
	public:
	void show()
	{
		cout<<"\nThe value of x from parent class is "<<x;	
	}	
};

template<class T>
class child: public parent<T>			//child class
{
	private:
	T y;
	public:
	void show_child()
	{
		cout<<"\nThe value of y from child class is "<<y;
	}
};

int main()
{
	parent<int> obj;
	child<int> obj2;
	obj.show();			//Shows a garbage value of x in parent
	obj2.show_child();  //Shows a garbage value of y in child
}