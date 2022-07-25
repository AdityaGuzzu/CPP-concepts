	/*We will see multi-dimensional arrays and the way to declare and initialise	
	them in this file */
#include<iostream>
using namespace std;
int main()
{
	int array1[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};	//This is a two dimensional array with 4 rows and 3 columns.
	cout<<endl<<"Printing the addresses of these elements";
	for(int i = 0; i<4; i++)	//This will loop over the rows
	{
		for(int j=0;j<3;j++)	//This will loop over columns
		{
			cout<<endl<<i+1<<" row "<<j+1<<" column's address "<<(int)&array1[i][j];
		}
	}	
}	

//We can also have arrays with more dimensions. 