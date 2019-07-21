#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *left;
    mylist *right;
} node;
node *create_node(int x)
{
    node *temp;
    temp=new node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;

}
void insert_left(node *s,node *child)
{
    s->left=child;
}
void insert_right(node *s,node *child)
{
    s->right=child;
}
node *create_tree()
{
    node *two=create_node(2);
    node *seven=create_node(7);
    node *nine=create_node(9);
    insert_left(two,seven);
    insert_right(two,nine);
    node *one=create_node(1);
    node *six=create_node(6);
    insert_left(seven,one);
    insert_right(seven,six);
    node *five=create_node(5);
    node *ten=create_node(10);
    insert_left(six,five);
    insert_right(six,ten);
    node *eight=create_node(8);
    insert_right(nine,eight);
    node *three=create_node(3);
    node *four=create_node(4);
    insert_left(eight,three);
    insert_right(eight,four);
    return two;

}
void pre_order(node *s)
{  cout<< s->data<< "  ";
    if(s->left !=NULL)
    {
        pre_order(s->left);
    }
    if(s->right !=NULL)
    {
        pre_order(s->right);
    }
}
void post_order(node *s)
{
    if(s->left !=NULL)
    {
      post_order(s->left);
    }
    if(s->right !=NULL)
    {
        post_order(s->right);
    }
    cout<< s->data<< "   ";

}
void in_order(node *s)
{
    if(s->left !=NULL)
    {
      post_order(s->left);
    }
    cout<< s->data<< "   ";
    if(s->right !=NULL)
    {
        post_order(s->right);
    }


}

int main()
{
    node *root=create_tree();
    cout<< "pre order: \n";
    pre_order(root);
    cout<< "\npost order:\n";
    post_order(root);
    cout<< "\nin order: \n";
    in_order(root);
    return 0;
}
