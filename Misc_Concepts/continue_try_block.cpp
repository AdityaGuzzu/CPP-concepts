#include<iostream>
int main()
{
    for(int x=0; x<5; x++)
    {
        try
        {
            if(x==3)
            throw x;
            std::cout<<std::endl<<x;
        }
        catch(int)
        {
            std::cout<<"\nexception caught";
            continue;
        }   
    }
}