/*In this program, we'll see what else we can do with enums */
#include<iostream>
using namespace std;
enum colour                 //colour is now kind of  an enum class
{
    red=0,green,blue
};
int main()
{
    colour var = blue;      //valid. var can either be red,green,blue i.e 0,1,2
    colour var2 = 0;        //Invalid. We must use red for 0, green for 1 and blue for 2
    if(var==2)              //valid. Because blue just stands for 2
    {
        cout<<"var = 2";        
    }
}