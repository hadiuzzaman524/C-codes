#include <iostream>

using namespace std;
class A;
class B
{
    int b;
public:
    void getb(int x)
    {
        b=x;
    }
    void showprev(A aa);
};
class A
{
    int a;
public:
    void geta(int x)
    {
        a=x;
    }
    friend void B::showprev(A aa);
};
void B::showprev(A aa)
{
    cout<< "value of class A: "<<aa.a<<endl;
    cout<< "value of class B: "<<b<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.geta(50);
    b1.getb(50);
    b1.showprev(a1);

}
