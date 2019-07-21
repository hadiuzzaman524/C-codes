#include <iostream>

using namespace std;
class x
{
    int value;
public:
    x(int i)
    {
        value=i;
    }
    void change()const
    {(const_cast<x*>(this))->value=value+10;
        cout<<value<<endl;
    }
};
int main()
{
   const int i=10;
   int *p;
   p=const_cast<int*>(&i);
   cout<<*p<<endl;
   x ob(9);
   ob.change();
    return 0;
}
