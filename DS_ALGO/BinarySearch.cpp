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

    bool elem_found = false;
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
        
        std::vector<int>::iterator midway = temp.begin() + temp.size()/2;
        if(*midway < search_elem)
        {
            std::vector<int>::iterator start  = midway;
            std::vector<int>::iterator stop = temp.end();
            std::vector<int> temp2(start,stop);
            temp = temp2;
        }
        else if(*midway > search_elem)
        {
            
            std::vector<int> temp2(temp.begin(),midway);
            temp = temp2;
        }
        else
        {
            std::cout<<"Element found ";
            elem_found = true;
            break;
        }
    }
    if(!elem_found)
    std::cout<<std::endl<<"ELement not found";

}