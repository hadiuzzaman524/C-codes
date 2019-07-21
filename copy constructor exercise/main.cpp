#include <iostream>

using namespace std;
class c
{
    int x;
    public:
    void setx(int p)
    {
        x=p;

    }
    void printx()
    {
        cout<<x<<endl;
    }
};

int main()
{
    c obj;
    obj.setx(100);
    c obj2=obj;
    obj2.printx();
}
