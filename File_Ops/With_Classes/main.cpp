/*This file has the main function which calls the 'visits' function*/
#include "declaration.h"
#include "definition.cpp"
int main()
{
	test obj;
	obj.visits();			//First visit 
	obj.visits();			//Second visit
	obj.visits();			//Third visit
}