/*
	The seekg() funcetion sets the file pointer to desired position
*/
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");

	//change the pointer to the third position
	InFile.seekg(5);
	char ch;
	InFile>>ch;
	OutFile<<ch;

	//closing files
	InFile.close();
	OutFile.close();	
}