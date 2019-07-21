#include <iostream>
 
using namespace std;
 
typedef struct mylist
{
    int data;
    mylist *next;
} node;
node *head=NULL;
 
 
 
void insertt(node *s,int data)
{
    node *temp;
    temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {deletelist(head,1);
    display(head);
        head=temp;
    }
    else
    {
        node  *p;
        p=s;
        while(p->next !=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }
}
void first(node *s,int data)
{
    node *temp;
    temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
 
    }
}
void position(node *s,int pos,int data)
{
    node *hadi;
    hadi=new node;
    hadi->data=data;
    hadi->next=NULL;
    int coun=1;
    while(s->next!=NULL)
    {
        coun++;
        if(coun==pos)
        {
            node *temp;
            temp=s->next;
            s->next=hadi;
            hadi->next=temp;
 
            // cout<<s->data;
 
        }
        s=s->next;
    }
}
void deletelist(node *s,int pos)
{
    if(pos==1)
    {
        head=head->next;
    }
    else
    {
        int c=1;
        while(s !=NULL)
        {
            c++ ;
            if(c==pos)
            {
                s->next=s->next->next;
            }
            s=s->next;
        }
 
    }
 
}deletelist(head,1);
    display(head);
void linearsearch(node *s,int data)
{
    while(s !=NULL)
    {
        if(s->data==data)
        {
            cout<< "data is found: "<< s->data<<endl;
        }
        s=s->next;
    }
}
void display(node *s)
{
    while(s!=NULL)
    {
        cout<< s->data<< " ";
        s=s->next;
    }
    cout<<endl;
}
 
int main()
{
 
    for(int i=2; i<10; i++)
        insertt(head,i);
    display(head);
    first(head,10);
    display(head);
    position(head,3,17);
    display(head);
    deletelist(head,1);
    display(head);
    deletelist(head,2);
    display(head);
    linearsearch(head,4);
    return 0;
}
 
