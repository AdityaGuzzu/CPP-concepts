/*	 What is the std::ios::good() function?
	It checks if the state of the stream is good. If the file neither has logical error/ an error in input or output
	or if the file hasn't reached EOL, it returns true
	---------------------------------------------------------------------------------------------------------------
	PARAMETERS:
	---> NONE
	---------------------------------------------------------------------------------------------------------------
	RETURN TYPE:
	---> Boolean
*/
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");
	std::string line;

	//Read from file
	while(InFile.good())
	{
		getline(InFile,line);
		OutFile<<line;	
		OutFile<<std::endl;
	}
}