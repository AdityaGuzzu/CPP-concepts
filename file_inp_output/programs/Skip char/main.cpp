/*
We will read contents from the contents.txt
file. If the char is 'a' skip it. Print the contents
on to the output file
*/
#include<iostream>
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");

	char character;
	//printing on to the console
	while(!InFile.eof())
	{
		InFile>>character;
		
		if(character != 'a')
		{
			OutFile<<character;
		}
	}
	
}