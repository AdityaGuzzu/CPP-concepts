/* A program to demonstrate the declaration and definition of character arrays */
#include<iostream>
using namespace std;
int main()
{
	char word1[5];							//mentioning the size of the string because we aren't initialising it yet
	char word2[] = {'a','b','c','\0'};				//The '\0' in the end is mandatory. That represents the end of the array
	char word3[] = "string";					//The '\0' is automatically taken in the end when we initalise the array with double quotes
	cout<<"the length of word 1 is : "<<sizeof(word1);		//We expect 5 bytes 
	cout<<endl<<"The length of word 2 is : "<<sizeof(word2);	//we expect 4 bytes
	cout<<endl<<"The length of word 3 is : "<<sizeof(word3);	//though we have only 6 characters, by the logic explained earlier, we must get 7 bytes
		
}