/*  What is the #ifndef command?
    C preprocessor supports what is called 'condional compilation'. That is, we
    can decide to switch on or off a particular piece of code.
    This is done using the #ifndef command
*/
#include<iostream>
#include "macros.cpp"       //Remember this file contains the macro ADITYA, which is replaced by 24
#ifndef VAMSI   

/* If the macro VAMSI wasn't defined in any included file, the program between #ifndef 
    and #endif WILL be compiled. Else, it will be omitted 
*/


using namespace std;

/*  EXTREMELY IMPORTANT NOTE: int main() was already defined in macros.cpp. So before compiling
    this program, comment the main function of the macros.cpp file 
*/

int main()
{
    cout<<"Hey, VAMSI was not defined in macros.";
}
#endif 
