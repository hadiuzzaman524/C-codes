#include <iostream>

using namespace std;
template <typename t>
class node
{ public:
    t data;
    node<t> *next;

    node(t s)
    {
        data=s;
        next=NULL;
    }
};
template <typename d>
class queue
{  public:
    node<d> *f,*r;

    queue()
    {
        f=r=NULL;
    }
    void enqueue(d x);
    void dequeue();
    void display();


};
template <typename d>
void queue<d>::enqueue(d x)
{
    node<d> *temp;
    temp=new node<d>(x);
    if(temp==NULL)
    {
        cout<< "queue is full"<<endl;
    }
    else
    {

        if(f==NULL)
        f=r=temp;
        else
        {
            f->next=temp;
            f=temp;
        }

    }
}
template <typename d>
void queue<d>::display()
{
    node<d> *t;
    t=r;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
template <typename d>
void queue<d>::dequeue()
{
    node<d> *t;
    t=r;
    r=t->next;
   delete t;
}
int main()
{
   queue<int> q;
   q.enqueue(9);
   q.enqueue(29);
   q.enqueue(44);
   q.enqueue(22);
   q.display();
   q.dequeue();
   q.display();
   q.dequeue();
   q.display();
    return 0;
}
