//We will try to create a linked list 

#include<iostream>
#include<chrono>
template<typename T>
class linked_list
{
    private:
    linked_list<T> *next;
    int size;
    linked_list<T> *head;
    linked_list<T> *tail;

    public:
    T elem;
    linked_list<T>()
    {
        linked_list<T> *head = NULL;
        linked_list<T> *tail = NULL;
        size=0;
    }
    void push(T elem)
    {
        next = new linked_list<T>;
        this->head = next;
        this->tail = next;
        head->elem = elem;
        head->next = NULL;
        size++;
    }

    bool IsEmpty()
    {
        return head == NULL;
    }

    T Head()
    {
        return head->elem;
    }

    T Tail()
    {
        return tail->elem;
    }

    int Size()
    {
        return size;
    }


};

int main()
{
std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;
    linked_list<int> numbers;
    numbers.push(10);
    int x = numbers.Head();
    //numbers.push();
    std::cout<<numbers.Head();
    numbers.push(20);
    numbers.push(30);
    std::cout<<std::endl<<numbers.Size();
    std::cout<<std::endl<<numbers.Tail();
    if(numbers.IsEmpty())
    std::cout<<"Queue empty";
    else
    std::cout<<std::endl<<"Queue Not empty";

}