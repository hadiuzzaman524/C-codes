#include <iostream>

using namespace std;
class A
{
public:
    int x;
protected:
    int y;
private:
    int z;
public:
    void setz(int p)
    {
        z=p;
    }
    void sety(int q)
    {
        y=q;
    }
    void setx(int m)
    {
        x=m;
    }
    int getx()
    {
        return x;

    }
    int gety()
    {
        return y;
    }
   int  getz()
    {
        return z;
    }
    int sum()
    {
        return x+y+z;

    }
};
class B:protected A
{
private:
    int sum;
public:
    B(int p,int q,int z)
    { A obj;
        obj.setz(z);
        obj.sety(q);
        obj.setx(p);
        cout<< obj.sum()<< endl;

    }
};
int main()
{ B obj1(8,3,6);


    return 0;
}
