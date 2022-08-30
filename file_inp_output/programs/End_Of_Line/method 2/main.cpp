/*
	In this method, the text contains only numbers and we will end the line with '/'. 
	Whenever '/' is read, it means the end of line is reached.
	
	The contents file has numbers in each line. All the numbers of each line should go into the vector of the 'main.cpp'
	and the average of each vector must be printed into the 'output.txt'
*/
#include<fstream>
#include<vector>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");
	std::vector<int> nums;
	while(!InFile.eof())
	{
		char character;
		int number;
		
		
	}
}