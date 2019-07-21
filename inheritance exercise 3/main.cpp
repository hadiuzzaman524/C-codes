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

};
class B:public A
{
public:
    void fun()
    {

        b=200;
        c=400;
    }
    void print()
    {
        cout<< b<< " "<< c<<endl;
    }
};
class C:protected A
{
public:
    void fun()
    {
       // a=10;
        b=20;
        c=45;
    }
};
class D:private A
{
public:
    void fun()
    {
        //a=100;
        b=200;
        c=400;

    }
};
class child_c:public C
{
public:
    void fg()
    {
        //a=4;
        b=5;
        c=6;
    }
};
int main()
{
D obj;
//obj.a=2;
//obj.b=5;
//obj.c=6;


    return 0;
}
