/*
	We will print the contents of the csv file
*/
#include<fstream>
int main()
{
	//Better not to use the good() method with csv files. Because we don't know how good is set for csv files
	std::ifstream InFile("content.csv");
	std::ofstream OutFile("output.txt");
	std::string line;
	
	while(getline(InFile,line,','))
	{
		OutFile<<std::endl<<line;
	}
	InFile.close();
	OutFile.close();
}