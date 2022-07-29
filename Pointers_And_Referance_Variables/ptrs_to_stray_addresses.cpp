/*  We'll see what happens when we assign stray addresses to pointers 
    However, NOTE: We cannot assign random values to pointers.
    ex: int *ptr = 75648;      is illegal
*/

#include<iostream>
using namespace std;
int main()
{
    int x=10;   //normal integer variable
    int *ptr;
    ptr = &x;   //Assigning the address of x to ptr
    cout<<(int)*(ptr+100);      //gives random values
    cout<<endl<<(int)*(ptr-100);
    cout<<endl<<(int)*(ptr+1000000000000000);       //Probably not enough space in stack for this memory to exist. In that case, no output is shown
}
/*NOTE: The program is behaving oddly, sometimes not showing any ouput due to the 
        use of pointers pointing to stray memory. So these must be avoided 
*/