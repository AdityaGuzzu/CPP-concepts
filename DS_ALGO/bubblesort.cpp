/*A program to demonstrate bubble sort algorithm */

#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int size;
	cout<<"Enter the number of elements you want to enter (between 1-10): ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}

	cout<<"\nElements before sort is \n";
	
	for(int i=0;i<size;i++)
	{
		cout<<"\t"<<arr[i];
	}

	cout<<"\nPrinting sorted elements in descending order: \n";
	
	for(int i=0;i<size;i++)
	{	
		for(int j=0;j<size;j++)
		{
			int temp = arr[j];
			if(arr[j] < arr[j+1])
			{
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}	
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<"\t"<<arr[i];
	}
}