/*
	We will just open a CSV file
*/
#include<fstream>
int main()
{
	std::fstream InFile("content.csv");
	std::ofstream OutFile("output.txt");
	if(InFile.is_open())
	{
		OutFile<<"content.csv could be opened";
	}
	else
	{
		OutFile<<"content.csv couldn't be opened";
	}
}