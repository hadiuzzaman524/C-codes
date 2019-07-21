#include <iostream>

using namespace std;
typedef struct
{
    int top;
    int data[10];
}stackk;
void push(stackk *s,int item)
{
    if(s->top<10)
    {
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else
    {
        cout<< "stack is full"<<endl;
    }
}
int pop(stackk *s)
{
    int item;
    if(s->top==0)
    {
        cout<< "the stack is full"<<endl;
    }
    else
    {
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;
}


int main()
{
    stackk s;
    for(int i=0; i<9; i++)
    {
        push(&s,i);
    }
    int item;

       item=pop(&s);
      cout<< item<<endl;
      item=pop(&s);
      cout<< item<<endl;
      item=pop(&s);
      cout<< item<<endl;
      push(&s,7);
      item=pop(&s);
      cout<< item<<endl;

}
