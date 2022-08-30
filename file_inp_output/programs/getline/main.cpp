/*
	I will try using the getline() function to read into strings
	from a file.
*/
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");
	std::string line;
	char test_char;
	while(InFile>>test_char)
	{
		/*
		We won't get the desired result because in the test condition we've given InFile>>test_char
		which reads the current character into test_char and then moves the pointer to next location
		*/
		getline(InFile,line,'\n');
		OutFile<<line;
		OutFile<<std::endl;
	}
}