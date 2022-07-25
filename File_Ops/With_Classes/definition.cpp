/*This file contiains the definition of the visits function */
#include<iostream>
#include "declaration.h"
using namespace std;
void test::visits()
{
	static int visit;
	visit++;
	cout<<"\nThe number of visits are: "<<visit;
}