/*  A program to demonstrate the swap member function of the vector class
    --------------------------------------------------------------------------------------
    INTRO:
    The swap member function swaps the content of two vectors of the same type
    ---------------------------------------------------------------------------------------
    PARAMETERS:
    ---> A vector of the same type as one which we want to swap
    ----------------------------------------------------------------------------------------
    RETURN VALUE:
    ---> NONE
*/

#include<iostream>
#include<vector>
int main()
{
    std::vector<int> first_5 = {1,2,3,4,5};
    std::vector<int> second_5 = {6,7,8,9,10};

     first_5.swap(second_5);
    
    //lets print the elements of first_5 and second_5

    std::cout<<std::endl<<"First_5 is now:  "<<std::endl;
    for(std::vector<int>::const_iterator it = first_5.begin(); it != first_5.end(); it++ )
    {
        std::cout<<*it<<std::endl;
    }

    std::cout<<"Second 5 is now :"<<std::endl;
     for(std::vector<int>::const_iterator it = second_5.begin(); it != second_5.end(); it++ )
    {
        std::cout<<*it<<std::endl;
    }
    
    
}
