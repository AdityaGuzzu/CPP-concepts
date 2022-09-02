/* See the use of off and way parameters of the seekg() */
#include<iostream>
#include<fstream>
int main()
{
	std::ifstream InFile("content.txt");
	char x;
	//Sets the pointer to -5 relative to the EOF.
	//We can also use the beg, cur as way parameters to get the position wrt beginning and the 
	// current pointer locations respectively.
	
	InFile.seekg(-5,std::ios_base::end);
	if(!InFile.good())
	{
		std::cout<<"\nThere is an error: ";
	}
	InFile>>x;
	std::cout<<x;
	InFile.close();
}
