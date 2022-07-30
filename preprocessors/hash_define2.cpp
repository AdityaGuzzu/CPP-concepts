//We will use macros in function arguments
#include<iostream>
#define HUNDRED 100
#define TWENTY 20
using namespace std;
void add(int x, int y)
{
    cout<<x<<" + "<<y<<" = "<<x+y;
}

int main()
{
    add(HUNDRED,TWENTY);    //HUNDRED replaced by 100 and TWENTY by 20
}