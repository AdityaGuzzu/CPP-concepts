/*
	We will use the std::ios::ate bit flag.	
*/
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt",std::ios::ate);
	std::ofstream OutFile("output.txt");
	std::string line;
	

	//Now try to input into line 
	InFile>>line;
	
	//try to print it into OutFile
	OutFile<<line;

	//We see that the output is empty.	
	InFile.close();
	OutFile.close();
}