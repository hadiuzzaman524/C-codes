#include <iostream>
#define maxx 10
using namespace std;
typedef struct
{
    int top;
    int data[maxx];
}stack;
bool isfull()
{
    if(stack top>maxx)
        return true;
    else
        return false;
}
void push(stack *s,int item)
{
    if(!isfull(&s))
    {
        s->data[s->top]=item;
        s->top=s->top+1;
    }


}
int pop(stack *s)
{
    int item;
    if(s->top>0)
    {
        s->top=s->top-1;
        item=s->data[s->top];
    }
    else
    {
        cout<< "the stack is empty.\n";
    }
    return item;
}

int main()
{
    stack s;
    for(int i=0; i<maxx; i++)
    {
        push(&s,i);
    }
    int item;
    item=pop(&s);
    cout<< item<<endl;



}
