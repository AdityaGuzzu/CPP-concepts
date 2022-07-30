/*  Using macros with arguments */
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#define CONC(x,y) strcat(x,y)
int main()
{
    char aditya[15] = "Aditya";
    char vamsi[6] = "Vamsi";
    cout<<CONC(aditya,vamsi);  

}