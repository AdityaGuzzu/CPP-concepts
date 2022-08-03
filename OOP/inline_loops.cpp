/*  My compiler treats a constructor as a default inline member function without me having to
    explicitly define it such way. So lets see what happens when we use loops in an inline function
*/
#include<iostream>
using namespace std;
class base
{
    int arr[5];
    public:
    base(int arr[])
    {
        for(int i=0; i<5; i++)
        {
            this->arr[i] = arr[i];
            cout<<endl<<arr[i];
        }
    }
};

int main()
{
    int arr[] = {1,2,3,4,5};
    base obj(arr);              //  We can use loops inside inline functions without 
                                //  causing any compilation error
}