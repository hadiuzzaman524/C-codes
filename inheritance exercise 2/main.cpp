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
int main()
{
    B obj;
    obj.fun();
    obj.c=5;


    obj.print();

    return 0;
}
