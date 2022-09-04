/*
	We will append to a CSV file
*/
#include<fstream>
int main()
{
	std::fstream OutFile("content.csv",std::ios::app);
	OutFile<<std::endl;
	OutFile<<"appending"<<",New words";	//appending and new words go to different cells
}