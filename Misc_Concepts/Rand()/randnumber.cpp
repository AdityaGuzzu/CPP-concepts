#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    for(int x = 0; x<10; x++)
    {
        cout<<endl<<rand();       //generates random numbers
    }
}