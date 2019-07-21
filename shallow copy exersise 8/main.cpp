#include <iostream>

using namespace std;
class ar
{
    int s;
    int *p;
public:
    void setarr()
    {
        cout<< "enter size: ";
        cin>>s;
        p=new int[s];
    }
    void setvalue()
    {
        for(int i=0; i<s; i++)
            cin>>p[i];
    }
    void printarr()
    {
        for(int i=0; i<s; i++)
            cout<< p[i]<< " ";
        cout<<endl;
    }
   void operator=(ar &temp)
    {
        s=temp.s;
        p=new int[s];
        for(int i=0; i<s; i++)
            p[i]=temp.p[i];
    }
    ~ar()
    {
        delete p;
        cout<< "object array destroyed\n"<<endl;
    }
};
int main()
{
   ar var1;
   var1.setarr();
   var1.setvalue();
   {
       ar var2;
       var2=var1;
       var2.printarr();
   }
   var1.printarr();

    return 0;
}
