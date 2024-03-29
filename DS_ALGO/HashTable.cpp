#include<iostream>
using namespace std;
#define size 7
int arr[size];
void init()
{
    int i;
    for(i = 0; i < size; i++)
	arr[i] = -1;
}
void insert(int value)
{
    int key = value % size;

    if(arr[key] == -1)
    {
	arr[key] = value;
	cout<<value<<" inserted at arr["<<key<<"]"<<endl;
    }
    else
    {
	cout<<("Collision : arr[%d] has element %d already!\n",key,arr[key]);
	cout<<"Unable to insert "<<value<<endl;
    }
}

void del(int value)
{
    int key = value % size;
    if(arr[key] == value)
	arr[key] = -1;
    else
	cout<<value<<" is not present in the hash table\n";
}

void search(int value)
{
    int key = value % size;
    if(arr[key] == value)
	cout<<"Search Found\n";
    else
	cout<<"Search Not Found\n";
}

void print()
{
    int i;
    for(i = 0; i < size; i++)
	cout<<"arr["<<i<<"]"<<arr[i]<<"\n";
}

int main()
{
    init();
    insert(10); //key = 10 % 7 ==> 3
    insert(4);  //key = 4 % 7  ==> 4
    insert(2);  //key = 2 % 7  ==> 2
    insert(3);  //key = 3 % 7  ==> 3 (collision)

    cout<<"Hash table\n";
    print();
    cout<<endl;

    cout<<"Deleting value 10..\n";
    del(10);
    cout<<"After the deletion hash table\n";
    print();
    cout<<"\n";

    cout<<"Deleting value 5..\n";
    del(5);
    cout<<"After the deletion hash table\n";
    print();
    cout<<"\n";

    cout<<"Searching value 4..\n";
    search(4);
    cout<<"Searching value 10..\n";
    search(10);
}
