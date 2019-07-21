#include <iostream>

using namespace std;
class stack
{
    int top;
    static const int maxx=10;
    int data[maxx];
public:
    stack()
    {
        top=-1;
    }
    bool isempty();
    bool isfull();
    void push(int x);
    int pop();
};
bool stack::isempty()
{
    if(top==-1)
   return true;
   return false;


}
bool stack::isfull()
{
    if(top==maxx-1)
        return true;
    return false;
}
void stack::push(int x)
{
    if(isfull())
    {
        cout<< "stack is overflow.\n";
    }
    top++;
    data[top]=x;

}
int stack::pop()
{
    if(isempty())
    {
        cout<< "the stack is underflow.\n";
    }

    int x;
    x=data[top];
    top--;
    return x;
}
int main()
{
    stack s;
    s.push(6);
    s.push(8);
    s.push(9);
    cout<<s.pop()<<s.pop();
}
