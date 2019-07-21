#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;
typedef struct hadi
{
    int data;
    struct hadi *next;
} node;


void insertlinklist(node *newnode,int data)
{
    while(newnode->next !=NULL)
    {
        newnode=newnode->next;
    }
    newnode->next=(node*)malloc(sizeof(node));
    newnode->next->data=data;
    newnode->next->next=NULL;
}
void displaylinklist(node *newnode)
{
    while(newnode->next !=NULL)
    {
        cout<< newnode->next->data<<"   ";
        newnode=newnode->next;
    }
    cout<<endl<<endl;
}
void deletenode(node *newnode,int data)
{
    while(newnode->next !=NULL)
    {
        if(newnode->next->data==data)
        {
            newnode->next=newnode->next->next;
        }
        newnode=newnode->next;
    }
}
void deletenodeatindex(node *newnode,int data)
{
    node *s;
    s=newnode;
    if(newnode==NULL)
    {

        return;
    }
    if(data==0)
    {
        newnode=s->next;
        free(s);
        return;
    }
    for(int i=0; s !=NULL&&i<data-1; i++)
    {
        s=s->next;
    }
    if(s==NULL ||s->next ==NULL)
    {
        return;
    }
    node *temp;
    temp=s->next->next;
    free(s->next);
    s->next=temp;


}
void foundposition(node *head,int position)
{
    node *temp;
    temp=head;
    int i=0;
    while(temp !=NULL)
    {
        if(position==i)
        {
            cout<< temp->data<<endl;
        }
        temp=temp->next;
        i++;
    }

}
int main()
{
    string s(50,'*');
    string p(55,'-');
    node *head;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    insertlinklist(head,60);
    insertlinklist(head,16);
    insertlinklist(head,66);
    insertlinklist(head,8);
    insertlinklist(head,1);
    insertlinklist(head,5);
    insertlinklist(head,88);
    insertlinklist(head,69);
    insertlinklist(head,98);
    insertlinklist(head,32);
    insertlinklist(head,77);
    insertlinklist(head,33);
    cout<<s<<endl;
    cout<< "THIS IS LAB REPORT OF LINK LIST USING SWITCH CASE:"<<endl<<endl;
    cout<< "SUPPOSE THIS INPUT ARE ALREADY INSERT IN LINK LIST: "<<endl;
    cout<<p<<endl;
    displaylinklist(head);
    cout<<p<<endl;
    cout<< "\n1.DISPLAY LIST\n2.LINEAR SEARCH\n"
        "3.DELETE NODE USING INDEX\n4.DELETE NODE USING DATA"<<endl;
    cout<<s<<endl;

    int n;
    cin>>n;

    switch(n)
    {
    case 1:
    {
        displaylinklist(head);
        break;

    }
    case 2:
    {
        int n;
        cout<< "inter search position: ";
        cin>>n;
        foundposition(head,n);

        break;
    }
    case 3:
    {
        int n;
        cout<< "enter the index which you can delete? ";
        cin>>n;
        deletenodeatindex(head,n);
        cout<< "now update list is: "<<endl;
        displaylinklist(head);

        break;
    }
    case 4:
    {
        int n;
        cout<< "enter the data which you can delete? ";
        cin>>n;
        deletenode(head,n);
        cout<< "now update list is: "<<endl;
        displaylinklist(head);
        break;
    }
    default:
        cout<< "INVALID INPUT. PLEASE SELECT CORRECT INPUT\n";
    }


    return 0;


}
