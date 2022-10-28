/*
    Creating a queue using arrays
*/
#include<iostream>
template<typename T>
class queue
{
    private:
    int head,rear;
    int size;
    T *arr;
    T fillval;

    public:
    queue<T>(int size, T fillval)
    {
        head = -1;
        rear = -1;
        arr = new T[size];
        this->size = size;
        this->fillval = fillval;
    }

    void enqueue(T elem)
    {
        if(head != size)
        {
            head++;
            arr[head] = elem;
        }
        else
        {
            std::cout<<"Queue Overflow";
        }
        if(rear == -1)
        rear++;
    }

    void dequeue()
    {
        if(rear != -1 && rear != head)
        {
            arr[rear] = fillval;
            rear++;
        }
        else
        {
            std::cout<<"Queue Empty";
        }

    }

    T Head()
    {
        return arr[head];
    }

    T Rear()
    {
        return arr[rear];
    }

    bool IsEmpty()
    {
        return head == rear;
    }
};

int main()
{
    int size;
    std::cout<<"Enter the size of the queue: ";
    std::cin>>size;
    queue<int> obj(size,0);
    for(int i=0; i<size; i++)
    {
        obj.enqueue(i);
        std::cout<<std::endl<<obj.Head();
    }
    std::cout<<std::endl<<"The rear is "<<obj.Rear();
    obj.dequeue();
    obj.dequeue();
    std::cout<<"\nThe rear is: "<<obj.Rear();

    std::cout<<std::endl<<obj.Rear();

}