#include <iostream>

using namespace std;
class problem
{
    int *pointer,size;
public:
    problem(int s=0)
    {
        size=s;
        pointer=new int[size];
    }
    void setvalue()
    {
        cout<< "enter input: "<<size<<endl;
        for(int i=0; i<size; i++)
            cin>>pointer[i];
    }
    void printvalue()
    {
        cout<< "the output are: "<<endl;
        for(int i=0; i<size; i++)
            cout<< pointer[i]<< " ";
        cout<<endl;
    }
    problem(problem &ob)
    {
        size=ob.size;
        pointer=new int[size];
        for(int i=0; i<size; i++)
            pointer[i]=ob.pointer[i];
    }
};
int main()
{
   problem a(5),b(3);
   a.setvalue();
   a.printvalue();
   b.setvalue();
   b.printvalue();
   problem c=b;
   c.setvalue();
   b.printvalue();
    return 0;
}
