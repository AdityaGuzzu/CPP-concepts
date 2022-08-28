/*

Writing into a file

*/

#include<iostream>
#include<fstream>
int main()
{
	//create an object of class fstream/ifstream. Here we choose fstream for the purpose of homogeneity

	std::ofstream MyFile("out.txt");	
	
	/*
	1.) You can also call the default construtor and later use the MyFile.open("filename",std::ios::mode)
	2.) out.txt is created in the current directory if its not already there
	3.) While writing into the file, all the contents of the file are re-written with the passed string/char array
	*/

	MyFile<<"Hey, I have just re-written the file";
	
}