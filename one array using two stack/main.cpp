#include <iostream>

using namespace std;
class twostacks
{
    int size;
    int *arr;
    int top1,top2;
public:

    twostacks(int x)
    {
        size=x;
        arr=new int[size];
        top1=-1;
        top2=x;
    }
    void push1(int p)
    {
        if(top1<top2-1)
        { top1++;
            arr[top1]=p;

        }
        else
        {
            cout<< "stack is overflow."<<endl;
        }
    }
    void push2(int p)
    {
        if(top1<top2-1)
        {
            top2--;
            arr[top2]=p;
        }
        else
        {
            cout<< "stack is overflow"<<endl;
        }
    }
    int pop1()
    {   int x;
        if(top1>=0)
        {

            x=arr[top1];
            top1--;
        }
        return x;
    }
    int pop2()
    {
        int x;
        if(top2<size)
        {

            x=arr[top2];
            top2++;
        }
        return x;
    }
void print()
{
    for(int i=0; i<size; i++)
        cout<<arr[i]<< "  ";
    cout<<endl;
}

};
int main()
{ twostacks ob(5);
  ob.push1(5);
  ob.push1(3);
  ob.push2(2);
  ob.push2(4);
  cout<< ob.pop1()<<endl;
  cout<< ob.pop2()<<endl;
  cout<< ob.pop1()<<endl;
  ob.print();
    return 0;
}
