#include <iostream>
using namespace std;
template <typename n>
class node
{
public:
   n item;
   node<n> *next;
    node(n item)
    { this->item=item;
      next=NULL;}
};
template <typename t>
class stack
{
    int s;
    node<t> *top;
public:
    stack<t>()
    {
        s=0;
        top=NULL;
    }
    void push(t item);
    void pop();
    t Top();
    void display();
};
template <typename t>
void stack<t>::push(t item)
{
    node <t> *temp;
    temp=new node<t>(item);
    if(top==0)
    {
        top=temp;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}
template <typename t>
void stack<t>::display()
{
    node <t> *temp;
    temp=top;
    while(temp !=NULL)
    {
        cout<< temp->item<< " ";
        temp=temp->next;
    }
    cout<<endl;
}
template <typename t>
void stack<t>::pop()
{
    node<t> *temp;
    if(top==NULL)
        cout<< "the stack is empty."<<endl;
    else
    {
        temp=top;
        top=top->next;
        delete temp;

    }
}
template <typename t>
t stack<t>::Top()
{
    t x;
    x=top->item;
    return x;
}
int main()
{
  stack <int>p;
  p.push(9);
  p.push(8);
  p.push(99);
  p.push(199);
  p.display();
  p.pop();
  p.display();
  cout<< p.Top()<<endl;
  p.pop();
  cout<< p.Top()<<endl;
    return 0 ;
}
