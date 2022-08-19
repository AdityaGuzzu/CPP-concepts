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
        return arr_ptr[Top];
    }

    void push(T _element)
    {
        try
        {
            if(Top != size)
            {
                Top++;
                arr_ptr[Top] = _element;
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
        try
        {
             if(Top != -1)
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

    bool empty()
    {
        return Top == -1;
    }
};

int main()
{
   stack<int> _int_stack(5);
   for(int i=0; i<5; i++)
   {
        _int_stack.push(i);
        std::cout<<std::endl<<_int_stack.top();
   }
}