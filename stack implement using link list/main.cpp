#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    char data;
    mylist *next;
} node;
node *head=NULL;
void push(char x)
{
    node *temp;
    temp=new node;
    if(temp==NULL)
        cout<< "stack is overflow.";
    else
    {
        temp->data=x;
        temp->next=head;
        head=temp;
    }

}
void display()
{
    node *p;
    p=head;
    while (p !=NULL)
    {
        cout<< p->data<<endl;
        p=p->next;
    }
}
char pop()
{
    char x=-1;
    if(head==NULL)
    {
        cout<< "stack is underflow.";
    }
    else
    {
        node *p;
        p=head;
        x=head->data;
        head=head->next;
        free(p);
    }
    return x;
}
bool ismatch(string s)
{
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='(')
            push(s[i]);
        else if(s[i]==')')
        {
            if(head==NULL)
                return false;
            pop();
        }
    }
    if(head==NULL)
        return true;
    return false;
}
int main()
{
 string ex("((a+b)+c)+)");
 if(ismatch(ex)==true)
 {
     cout<< "match"<<endl;
 }
 else
    cout<< "no match"<<endl;
    return 0;
}
