/*  What is macro substitution?
    Macro substitution is a process where an identifier in the program is replaced by a predefined string
    composed of one or more tokens.
    The preprocessor accomplishes the task under the direction of the #define statement
*/

#include<iostream>
#define ADITYA 24
using namespace std;
int main()
{
    cout<<ADITYA;       //ADITYA is replaced by 24 before the compliation takes place.
}



