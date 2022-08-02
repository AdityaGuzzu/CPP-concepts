/* We will see how to generate a random number betweeen 0 and a given number n */
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int num;
    cout<<endl<<"Enter a number:  ";
    cin>>num;
    cout<<"five random numbers between zero and "<<num<<" will be generated: ";
    for(int i=0; i<5; i++)
    {
        cout<<endl<<(rand()%(num + 1));     //We divide the random number by (num+1) and take the reminder to get a value between 0 and num
    }
}