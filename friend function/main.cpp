#include <iostream>

using namespace std;
class A;
class B
{
    int b;
public:
    B()
    {
        b=0;
    }
    void getb(int x)
    {
        b=x;
    }
    void showb(A a);
};
class A
{
    int a1;
public:
    A()
    {
        a1=0;
    }
    void geta1(int x)
    {
        a1=x;
    }
    friend void B::showb(A a);
};
void B::showb(A a)
{
    cout<< "value of b="<<a.a1<<endl;
    cout<< "value of a="<<b<<endl;
}
int main()
{
   A c;
   B d;
   c.geta1(30);
   d.getb(59);
   d.showb(c);
}
