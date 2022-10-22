//We will try to create a linked list 

#include<iostream>
template<typename T>
class linked_list
{
    private:
    linked_list<T> *link;
    int size;
    linked_list<T> *top;

    public:
    T elem;
    linked_list<T>()
    {
        linked_list<T> *top = NULL;
        size=0;
    }
    void push(T elem)
    {
        link = new linked_list<T>;
        top = link;
        top->elem = elem;
        size++;
    }

    bool IsEmpty()
    {
        return top == NULL;
    }

    T Top()
    {
        return top->elem;
    }

    int Size()
    {
        return size;
    }


};

int main()
{
    linked_list<int> numbers;
    numbers.push(10);
    int x = numbers.Top();
    //numbers.push();
    std::cout<<numbers.Top();
    std::cout<<std::endl<<numbers.Size();

}