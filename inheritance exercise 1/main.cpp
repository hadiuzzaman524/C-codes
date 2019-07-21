#include <iostream>

using namespace std;
class A
{
private:
    int a;
protected:
    int b;
public:
    int c;
    A()
    {
        a=2,b=3,c=4;
    }

};
class B: public A
{
public:
    B()
    {
        c=100;
        b=100;

    }
    void print()
    {
        cout<<b<<c;
    }
};

int main()
{ B obj;
obj.c=400;
obj.print();

    return 0;
}
