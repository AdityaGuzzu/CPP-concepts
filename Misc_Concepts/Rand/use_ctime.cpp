/* We will use ctime header to generate truly random numbers */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    for(int i=0; i<10; i++)
    {
        cout<<endl<<rand() % 15;    //Generates random integers between 0 and 14
    }
}