/*A program to implement linear search algorithm*/

#include<iostream>
using namespace std;
int main()
{
	int arr[20];		//The array
	int size;			//Size of the array. The user decides it
	int boolean=0;		//used in the loop to check if no element matches the search element
	cout<<"Enter the number of elements you want to enter. Between 1-20";
	cin>>size;
	for(int i = 0; i<size;i++)
	{
		cin>>arr[i];
	}
	int search_element;	//This contains the element the user wants to search
	
	cout<<"\nEnter the element you want to search ";
	cin>>search_element;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i] == search_element)
		{
			cout<<"\n The element is found";
			boolean = 1;
			break;
		}
	}
	if(boolean == 0)						//Bool wont be changed if no element of the array matches the search element
	cout<<"\nElement not found";
}