/*  We'll see what happens when we use char as the int type instead of usual integer.
    Here, char just acts as a traditional integer with just 8 bits instead of 32 
*/
#include<iostream>
using namespace std;
enum chars__ :  char         //Here char acts as a 8 bit integer. from -128 to 127
{
    A= 125,B,C
};
int main()
{
    cout<<C;                //This gives 127
}