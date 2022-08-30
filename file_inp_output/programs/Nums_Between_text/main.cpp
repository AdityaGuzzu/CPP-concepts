/*
    We will try to read the numbers between the text of the contents.txt file.
    Unfortunately this can't be done. We can only read numbers when all the contents are of
    type int.

    We save the numbers of the file into a vector and later print it.

*/
#include<fstream>
#include<vector>
#include<iostream>
int main()
{
    std::ifstream InFile("content.txt");
    std::vector<int> arr;
    int i=0;
    while(!InFile.eof())
    {
        int number;
        InFile>>number;
        arr.push_back(number);
        i++;
    }
    for(int i=0;i<arr.size();i++)
    {
        std::cout<<std::endl<<arr[i];
    }
}