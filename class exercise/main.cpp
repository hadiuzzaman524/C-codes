#include <iostream>

using namespace std;
class A
{
public:
    A()
    {
        cout<< "parent A"<<endl;;
    }
    void sum(int x,int y);
    void sum(double x,double y);
    ~A()
    {
        cout<< "parent  a"<<endl;
    }
};
void A::sum(int x,int y)
{
    cout<< x+y<<endl;
}
void A::sum(double x,double y)
{
    cout<< x+y<<endl;
}
class B: virtual public A
{
public:
    B()
    {
        cout<< "child B"<<endl;
    }
    ~B()
    {
        cout<< "child b"<<endl;
    }
    void sum(int x,int y);
    void sum(double x,double y);
};
void B::sum(int x,int y)
{
    cout<< x*y<<endl;
}
void B::sum(double x,double y)
{
    cout<< x*y<<endl;
}

int main()
{
   A oba;
   B obb;
   A *pointer;
   pointer=&oba;
   pointer->sum(5,7);
   pointer->sum(3.6,2.5);
   cout<<endl;
   pointer=&obb;
   pointer->sum(5,6);
   pointer->sum(2.4,7.6);
    return 0;
}
