/*A program to demonstrate unformatted input and output streams in C++ */
#include<iostream>
using namespace std;
int main()
{
	char c;
	char constraint;
	int limit;
	char word[20];
	cout<<"Enter the character: ";
	cin>>c;
	cout<<"\nEnter the size of the string: ";
	cin>>limit;
	cout<<"\nEnter the constraint character: ";
	cin>>constraint;
	cout<<"Now enter the string: ";
	cin.getline(word,limit,constraint);
	cout<<word;
}