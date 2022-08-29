/*
	We will try to read the End Of 
	Line char.
*/
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");
	while(!InFile.eof())
	{
		char character;
		InFile>>character;
		if(character == '\n')		//This doesn't work actually.
		{
			OutFile<<"New Line";
		}
		else
		{
			OutFile<<character;
		}	
			
	}
	OutFile.close();
	InFile.close();
}
