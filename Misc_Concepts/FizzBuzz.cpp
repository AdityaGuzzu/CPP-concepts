#include<iostream>
int main()
{
    int end;
    using namespace std;
    cout<<"enter the number";
    cin>>end;
    for(int counter=1; counter<=end; counter++)
    {
        if(counter%5 ==0 && counter%3 == 0)
        {
            cout<<"FizzBuzz\n";
        }
        else if(counter%3 == 0)
        {
            cout<<"Fizz\n";
        }
        else if(counter%5 == 0)
        {
            cout<<"Buzz\n";
        }
        else
        {
            cout<<counter<<endl;
        }
    }
}