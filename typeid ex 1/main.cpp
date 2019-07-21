#include <iostream>
#include <typeinfo>
using namespace std;
class jaman
{
    int x;
    public:
    jaman()
    {

    }
};
class orpi:public jaman
{
    int p;
public:
    orpi()
    {

    }
};
class habib
{
    int m;
};
int main()
{ habib h;
  orpi o,p;
  jaman j;
if(typeid(h)==typeid(o))
    cout<< "there are same class object "<<endl;
else
    cout<< "there are not same object."<<endl;
    if(typeid(p)==typeid(o))
    cout<< "there are same class object "<<endl;
else
    cout<< "there are not same object."<<endl;
    cout<< typeid(h).name()<<endl;
    cout<<typeid(o).name()<<endl;
    cout<< typeid(p).name()<<endl;

    return 0;
}
