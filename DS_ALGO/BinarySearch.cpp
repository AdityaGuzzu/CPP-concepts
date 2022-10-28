/*
    A program to implement Binary Search algorithm

*/
#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> numbers;
    int size;
    int search_elem;
    std::cout<<"Enter the size of the vector: ";
    std::cin>>size;
    std::cout<<"Enter the vector elements: ";
    for(int i=0;i<size;i++)
    {
        int elem;
        std::cin>>elem;
        numbers.push_back(elem);
    }
    numbers.shrink_to_fit();
    std::sort(numbers.begin(),numbers.end());
    std::vector<int> temp(numbers.begin(),numbers.end());
    std::cout<<"What is the element you are looking for? ";
    std::cin>>search_elem;
    while(temp.size() > 1)
    {
        if(*(temp.begin() + temp.size()/2) > search_elem)
        {
            std::vector<int>::iterator begin  = temp.begin();
            std::vector<int>::iterator end = temp.begin() + (temp.size()/2 -1);
            std::vector<int> temp2(begin,end);
            temp = temp2;
        }
        else if(*(temp.begin() + temp.size()/2) < search_elem)
        {
            std::vector<int>::iterator begin  = temp.begin();
            std::vector<int>::iterator end = temp.begin() + (temp.size()/2 -1);
            std::vector<int> temp2(begin,end);
            temp = temp2;
        }
    }

}