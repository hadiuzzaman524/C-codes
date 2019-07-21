#include <iostream>

using namespace std;
class c
{
    int x,y;
public:
    void setx(int p,int q)
    {
        x=p;
        y=q;
    }
    void printx()
    {
        cout<< "x is: "<<x<< "y is: "<<y<<endl;
    }
    void operator=(c obj);
};
void c::operator=(c obj)
{
    x=obj.y;
    y=obj.x;
}
int main()
{
    c ob,ja;
    ob.setx(10,20);
    ob.printx();
    ja=ob;
    ja.printx();
}
