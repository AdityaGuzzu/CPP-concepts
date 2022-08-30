/*
	We will see how the EOF works:
	true if the stream's eofbit error state flag is set (which signals that the End-of-File has been 
	reached by the last input operation).
*/
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");

	//The loop below is a fatal error because content.txt is full of chars and there is no int. So NO read will
	//be successful. hence, eof will forever be set to false.
	while(!InFile.eof())
	{
		int num;
		InFile>>num;
		OutFile<<num;
	}
}