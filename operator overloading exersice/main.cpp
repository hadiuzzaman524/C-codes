#include <iostream>

using namespace std;
class arr
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
        {
            cin>>p[i];
        }

    }
    void printarr()
    {
        for(int i=0; i<s; i++)
            cout<< p[i]<< "\t";
        cout<<endl;
    }
    ~arr()
    {
        delete p;
        cout<< "object array destroyed\n"<<endl;
    }
    void operator=(arr &temp)
    {
        s=temp.s;
        p=new int[s];
        for(int i=0; i<s; i++)
        {
            p[i]=temp.p[i];
        }
    }

};
int main()
{
    arr var1;
    var1.setarr();
    var1.setvalue();
    {
        arr var2;
        var2=var1;
        var2.printarr();
    }
    var1.printarr();
    return 0;
}
