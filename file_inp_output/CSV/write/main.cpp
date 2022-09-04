/*
	Just write into the csv file
*/

#include<fstream>
int main()
{
	std::ofstream OutFile("content.csv");
	int i=0;
	while(i != 5)
	{
		OutFile<<i<<",";
		i++;
	}
	OutFile.close();
}