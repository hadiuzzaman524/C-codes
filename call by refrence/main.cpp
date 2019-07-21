#include <iostream>

using namespace std;
class test
{
    int x;
public:
    void valofx(int a)
    {
        x=a;
    }
    int getx()
    {
        return x;
    }
};
void pow2ofa(test *);
int main()
{
    test t;
    t.valofx(10);
    cout<< "before function calling value of x is: "<<t.getx();
    pow2ofa(&t);
    cout<< "\n after function calling values of x is : "<< t.getx();
}
void pow2ofa(test *t)
{
    t->valofx(t->getx()*t->getx());
}
