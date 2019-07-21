#include <iostream>

using namespace std;
class c
{
    int *x;
public:
    void setx(int p)
    {
        x=new int;
        *x=p;
    }
    void printx()
    {
        cout<< *x<<endl;
    }
    ~c()
    {
        delete x;
    }
};
int main()
{
    c obj1;
    obj1.setx(9);
    obj1.printx();
    {
        c obj2=obj1;
    }

    obj1.printx();
    return 0;
}
