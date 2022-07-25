/*This file will contain the method of passing vectors to a function*/
#include<iostream>
#include<vector>
void read_out(vector<int> arr)				//passing vector as an arg
{
	for(int i=0;i<arr.size();i++)	
	{
		cout<<"\t"<<arr[i];
	}
}

void read_out(vector<int>);				//declaration

int main()
{
	vector<int> array={2,3,4,5,6,9};		//int vector
	read_out(arr);					//function call		
}