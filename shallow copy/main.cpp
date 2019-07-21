#include <iostream>

using namespace std;
class problem
{
    int *pointer,size;
public:
    problem(int s=0)
    {
        size=s;
        pointer=new int[s];
    }
    void setvalue()
    {
        cout<< "ENTER ITEM: "<<endl;
        for(int i=0; i<size; i++)
            cin>>pointer[i];
    }
    void printvalue()
    {
        cout<< "ITEM ARE: "<<endl;
        for(int i=0; i<size; i++)
            cout<< pointer[i]<< " ";
            cout<<endl;
    }
    problem(problem &ob)
    {
        size=ob.size;
        pointer=new int[size];
        for(int i=0; i<size; i++)
        {
            pointer[i]=ob.pointer[i];
        }
    }

};

int main()
{
    problem a(5),b(3);
    a.setvalue();
    a.printvalue();
    b.setvalue();
    problem c=b;
    c.setvalue();
    b.printvalue();
}
