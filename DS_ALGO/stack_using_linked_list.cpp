/*
    Here, I'll create a linked list which will be used to create a stack
*/
#include<iostream>
template<typename T>
class stack
{
    private:
    linked_list<T> *next;
    linked_list<T> *prev;
    linked_list<T> *top;
    int size;
    
    public:
    linked_list<T>()
    {
        this->next = NULL;
        this->prev = NULL;
        this->top = NULL;
        this->size = 0;
    }

    T elem;
    void push(T elem)
    {
        linked_list<T> *temp = top;
        this->top = new linked_list<T>;
        top->prev = temp;
        if(temp != NULL)
        {
            temp->next = top;
        }
        top->elem = elem;
        top->next = NULL;
        this->size++;
    }

    void pop()
    {
        if(this->size>0)
        {
            linked_list<T> *temp = top;
            if(top->prev != NULL)
            top = top->prev;

            top->next = NULL;
            delete temp;
            this->size--;
        }
        else
        {
            std::cout<<"Linked list of Size 0";
        }
        
    }

    T Top()
    {
        return top->elem;
    }

    int Size()
    {
        return this->size;
    }

    bool IsEmpty()
    {
        return size==0;
    }
    
};

int main()
{
    stack<int> numbers;
    numbers.push(10);
    numbers.push(20);
    std::cout<<numbers.Top()<<std::endl;
    numbers.pop();
    std::cout<<numbers.Top()<<std::endl;
    std::cout<<numbers.Size()<<std::endl;
    numbers.pop();
    std::cout<<numbers.Size()<<std::endl;
    numbers.pop();
}

