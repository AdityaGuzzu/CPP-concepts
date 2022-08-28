/*
We will now append to the file.
*/

#include<iostream>
#include<fstream>

int main()
{
	std::fstream Myfile("out.txt",std::ios::app);
	if(!Myfile.is_open())
	{
		std::cout<<"\nSorry, Can't open the file";
	}
	else
	{
		std::string line;
		std::cout<<"Opening the file: ";
		std::cout<<"Enter the string you want to append: ";
		char word[30];
		std::cin.getline(word,20);
		Myfile << word;
	}
}
