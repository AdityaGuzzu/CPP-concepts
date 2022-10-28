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
    int size;
    std::cout<<"Enter the size of the stack: ";
    std::cin>>size;
    std::cout<<"Pushing the elements from 0 to"<<size-1<<std::endl;
    stack<int> _int_stack(size);
   for(int i=0; i<size; i++)
   {
        _int_stack.push(i);
        std::cout<<std::endl<<_int_stack.top();
   }
   std::cout<<"\nHow many elements do you want to pop?";
   int pop_elements;
   std::cin>>pop_elements;
   for(int i=size;i>pop_elements;i--)
   {
    _int_stack.pop();
   }
   std::cout<<std::endl<<"Now printing the top: ";
   std::cout<<std::endl<<_int_stack.top();

}
