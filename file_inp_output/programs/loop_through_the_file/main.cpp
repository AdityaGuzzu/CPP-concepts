/*
	We will use an alternative method to loop through the file.
*/
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	std::ofstream OutFile("output.txt");
	int num;
	int counter = 0;
	while(InFile>>num)
	{
		OutFile<<num;
		counter++;
	}
	OutFile<<std::endl<<"THe number of successful reads are: "<<counter;
}