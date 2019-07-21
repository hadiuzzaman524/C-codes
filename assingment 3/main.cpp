#include <iostream>

using namespace std;
class listitem
{
    int item;
    listitem *next;
public:
    listitem(int arg)
    {
        item=arg;
        next=NULL;
    }
    int getitem()
    {
        return item;
    }
    void setnext(listitem *n)
    {
        next=n;
    }
    listitem *getnext()
    {
        return next;
    }
};
class list
{
    listitem *head;
    listitem *tail;
public:
    list()
    {
        head=NULL;
        tail=NULL;

    }
    virtual void store(int item)=0;
    virtual int retrive()=0;
    virtual void print()=0;
};
class queue:public list
{
    listitem *head;
    listitem *tail;
public:
    queue()
    {
        head=NULL;
        tail=NULL;
    }
    void store(int item)
    {
        listitem *a  = new listitem(item);
        if(head==NULL)
            head=tail=a;
        else
            {
                tail->setnext(a);
                tail = a;
            }
    }
    int retrive()
    {
        int x=-1;
        listitem *temp;
        if(head==NULL)
        {
             cout<<"Empty\n";
             return x;
        }
        else
        {
            x=head->getitem();
            temp=head;
            head=head->getnext();
            delete(temp);
            cout<< "delete element: "<<x<<endl;
            return x;
        }
    }
    void print()
    {
        listitem *s;
        s=head;
        while(s!=NULL)
        {
            cout<< s->getitem()<< " ,";
            s=s->getnext();
        }
        cout<<endl;
    }
};
int main()
{
    queue p;
    p.store(5);
    p.store(7);
    p.store(8);
    p.store(19);
    p.print();
    p.retrive();
    p.print();

    return 0;
}
