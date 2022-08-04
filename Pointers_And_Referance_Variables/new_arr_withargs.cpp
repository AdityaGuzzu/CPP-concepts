/* We will create a dynamic array with a parameterised constructor */
#include<iostream>
using namespace std;
class Base
{
    private:
    int x, y;
    public:
    Base(int x, int y): x(x), y(y) {cout<<endl<<"X = "<<x<<"\ty = "<<y;}
};
int main()
{
    Base *ptr = new Base[5];        //We can't do this. We must have default constructor
}