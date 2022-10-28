#include<iostream>

class Node
{   
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data=0)
    {
        next = NULL;
        prev = NULL;
        this->data = data;
    }

};

class DEqueue
{
    private:
    Node *head;
    Node *rear;
    int size;

    public:
    DEqueue()
    {
        head = NULL;
        rear = NULL;
        size=0;
    }

    void head_enqueue(int data)
    {
        if(head == NULL && rear == NULL)
        {
            Node *temp = new Node(data);
            head = rear = temp;
            head->next = NULL;
            rear->next = NULL;

            //We don't need temp anymore so better delete it
            delete temp;
            
        }

        else
        {
            Node *temp = new Node(data);
            head->next = temp;
            temp->prev = head;
            head = temp;
            head->next = NULL;

            //We don't need temp anymore so better to delete it
            delete temp;

        }
        size++;
    }

    void rear_enqueue(int data)
    {
        if(head == NULL && rear == NULL)
        {
            Node *temp = new Node(data);
            head = rear = temp;
            head->next = NULL;
            rear->next = NULL;

            //We don't need temp anymore so better delete it
            delete temp;   
        }
        else
        {
            Node *temp = new Node(data);
            temp->next = rear;
            rear->prev = temp;
            rear = temp;
            rear->prev = NULL;

            //We don't need temp anymore so deleting it
            delete temp;   
        }
        size++;
        
    }

    void head_dequeue()
    {
        if(head == rear)
        {
            head = rear = NULL;
            size = 0;
        }
        else
        {
            head = head->prev;
            head->next = NULL;
            size--;
        }
        if(size==0)
        {
            std::cerr<<"\nQueue empty";
        }
    }

    void rear_dequeue()
    {
        if(head == rear)
        {
            head=rear=NULL;
            size=0;
        }
        else
        {
            rear = rear->next;
            rear->prev = NULL;
            size--;
        }
        if(size==0)
        {
            std::cerr<<"\nQueue empty";
        }
    }

    int Rear()
    {
        return rear->data;
    }
    
    int Head()
    {
        return head->data;
    }

    int Size()
    {
        return size;
    }
};

int main()
{
    DEqueue obj;
    obj.head_enqueue(10);
    obj.head_enqueue(20);
    obj.rear_enqueue(0);
    std::cout<<std::endl<<obj.Size();
    obj.rear_dequeue();
    std::cout<<std::endl<<obj.Size();
    obj.rear_dequeue();
    std::cout<<std::endl<<obj.Size();
    obj.rear_dequeue();
    std::cout<<std::endl<<obj.Size();
    obj.rear_dequeue();
    std::cout<<std::endl<<obj.Size();

}