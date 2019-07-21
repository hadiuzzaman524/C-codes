#include <iostream>

using namespace std;
class queue
{
    int front;
    int rear;
    int size;
    int *q;
public:
    queue(int size)
    {
        this->size=size;
        q=new int[this->size];
        front=rear=0;
    }
    void enqueue(int x);
    int deque();
    void display();
};
void queue::enqueue(int x)
{
    if((rear+1)%(size+1)==front)
        cout<< "queue is full.";
    else
    {
        q[rear]=x;
        rear=(rear+1)%(size+1);
    }
}
int queue::deque()
{ int p;
    if((front==rear))
        cout<< "the queue is empty.";
    else
    {
        p=q[front];
        front=(front+1)%(size+1);
    }
    return p;
}

int main()
{
   queue s(5);
   s.enqueue(9);
   s.enqueue(10);
   s.enqueue(13);
   cout<<s.deque();
   cout<< s.deque();
   cout<< s.deque();
   cout<< s.deque();
   s.enqueue(19);
   cout<< s.deque();
    return 0;
}
