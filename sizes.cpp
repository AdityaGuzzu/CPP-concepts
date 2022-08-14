#include<iostream>
int main()
{
    unsigned int num1;
    signed int num2;
    unsigned long int num3;
    signed long int num4;
    long long num5;
    std::cout<<std::endl<<"The size of unsigned int is "<<sizeof(num1);
    std::cout<<std::endl<<"The size of signed int is "<<sizeof(num2);
    std::cout<<std::endl<<"The size of unsigned long is "<<sizeof(num3);
    std::cout<<std::endl<<"The size of signed long is "<<sizeof(num4);
    std::cout<<std::endl<<"The size of long long is "<<sizeof(num5);
}