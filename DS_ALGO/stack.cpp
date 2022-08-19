/* This file will contain the implementation of the stack data structure in C++ */
#include<iostream>
template<typename T>
class stack
{
    T *arr_ptr;
    int Top;
    int size;
    public:
    stack(int size)
    {
        this->size = size;
        arr_ptr = new T[size];
        Top = -1;
    }

    T top()
    {
        return arr_ptr[top];
    }

    void push(T _element)
    {
        try
        {
            if(Top != size)
            {
                Top++;
                arr_ptr[top] = _element;
            }
            else
            {
                throw Top;
            }
            
        }
        catch(int Top)
        {
            std::cerr<<"\nStack Overflow";
        } 
    }

    void pop()
    {
        throw
        {
             if(top != -1)
            {
                arr_ptr[Top] = 0;
                Top--;
            }
            else
            {
                throw Top;
            }
        }
       catch(int Top)
       {
            std::cerr<<"\nStack Underflow";
       }  
    }
};