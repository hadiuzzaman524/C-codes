#include <iostream>

using namespace std;
class A
{ public:
    int x;
};
class B: virtual public A
{
public:
    int y;
};
class C:virtual public A
{
public:
    int z;
};
class D:public B, public C
{
public:
    void print()
    {
        cout<< x<< "\t"<< y<< "\t"<<z<<endl;
    }
};
int main()
{
   D obj;
   obj.x=5;
   obj.y=6;
   obj.z=9;
   obj.print();

    return 0;
}
