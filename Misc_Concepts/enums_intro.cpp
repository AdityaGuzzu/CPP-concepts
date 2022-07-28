/* This file contains the basics of enums and how to use them 
    DEFINITION: Enumerations are a set of values. In short, Enumeration can be thought
                of as the way to give name to a value
*/
#include<iostream>
using namespace std;

/* Defining an enum class */

enum white_ticket
{
    Waterways_Satellite=0, Roadways_Railways, Airways_Petroleum
    //Here, we initialised the first term with 0. So the values of next terms will be incremented by 1.
};
int main()
{
   int colour_group;
   colour_group = Waterways_Satellite;   //Waterways_Satellite just stands for 0 here.

}