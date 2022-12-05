/*
A program to implement queues using linked lists
*/

#include<iostream>
template<typename T>
class queue
{
    private:
    queue<T> *next;
    queue<T> *prev;
    queue<T> *top;
    queue<T> *rear;
    int max_size;
    int size;
    
    public:
    queue<T>() {}
    queue<T>(int size)
    {
        this->next = NULL;
        this->prev = NULL;
        this->top = NULL;
        this->rear = NULL;
        this->max_size = size;
        this->size = 0;
    }

    T elem;
    void enqueue(T elem)
    {
        if(size < max_size)
        {
        queue<T> *temp = top;
        this->top = new queue<T>;
        top->prev = temp;
        if(temp != NULL)
        {
            temp->next = top;
        }
        top->elem = elem;
        top->next = NULL;
        this->size++;
        if(rear == NULL)
        {
            rear = top;
        }
        }
        
    }

    void dequeue()
    {
        if(this->size>0)
        {
            queue<T> *temp = rear;
            if(rear->next != NULL)
            rear = rear->next;

            temp->prev = NULL;
            delete temp;
            this->size--;
        }
        else
        {
            std::cout<<"Queue Size 0";
        }
        
    }

    T Head()
    {
        return top->elem;
    }

    T Rear()
    {
        return rear->elem;
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
    queue<int> numbers(5);
    numbers.enqueue(10);
    std::cout<<numbers.Head();
    numbers.enqueue(20);
    numbers.enqueue(30);
    std::cout<<std::endl<<numbers.Rear();
    numbers.dequeue();
    std::cout<<std::endl<<numbers.Rear();
    numbers.dequeue();
    std::cout<<std::endl<<numbers.Rear();
}