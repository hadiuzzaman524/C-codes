#include <iostream>

using namespace std;
class A;
class B
{
    int x;
    public:
    void setxx(int i)
    {
        x=i;
    }

    void showA(A a);
};
class A
{
    int x;
    public:
    void setx(int y)
    {
        x=y;
    }
    int getx()
    {
        return x;
    }
    friend void B:: showA(A a);
};
void B::showA(A a)
 {
     cout<< a.x<<endl;
     cout<< x<<endl;
 }


int main()
{
   A a;
   B b;
   a.setx(9);
   b.setxx(66);
   b.showA(a);
   //cout<< b.showA(a);

}
