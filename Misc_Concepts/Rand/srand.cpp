/* We will use the srand() function to generate seeded random numbers.
For every different seed value used in a call to srand, the pseudo-random number generator
can be expected to generate a different succession of results in the subsequent calls to
rand.

Two different initializations with the same seed will generate the same succession of results in subsequent calls to rand.

    ------------------------------------------------------------------
    PARAMETERS:
    ---> AN unsigned integer    (int)
    ------------------------------------------------------------------
    RETURN VALUE:
    ---> NONE
*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    srand(100);
    for(int i=0;i<10;i++)
    {
        /*  We are generating random numbers between 0 and 14. If we run this program again, 
            we'll see the same output. So, to generate truly random numbers, we need to change 
            the seed value at rumtime. We usually do that using the ctime header.
        */
        cout<<endl<<rand() % 15;       

    }
}