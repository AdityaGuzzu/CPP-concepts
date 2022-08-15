#include<iostream>
int main()
{
    int num=0;
    while(num < 10)
    {
        std::cout<<std::endl<<"Iteration number : "<<num+1;
        if(num == 2)
        {
            num++;
             continue;
        }
        else
        {
            for(int i=0;i<10;i++)
                {
                if(i != 5)
                {
                    std::cout<<std::endl<<i;
                }
                else
                {
                    continue;  
                }
                
            }
        } 
        num++;
    }
}