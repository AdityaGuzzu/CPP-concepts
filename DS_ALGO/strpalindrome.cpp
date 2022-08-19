/* A program to demonstrate string palindrome */
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char word[10];
	char wordcopy[10];
	cout<<"ENter the word";
	gets(word);
	strcpy(wordcopy,word);
	strrev(word);
	if(strcmp(wordcopy,word) == 0)
	{
		cout<<"\n"<<wordcopy<<" is a palindrome ";
	}
	else
	{	
		cout<<"\n"<<wordcopy<<" is not a palindrome ";
	}
}
