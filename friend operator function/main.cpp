#include <iostream>

using namespace std;
class X
{
    int height,width;
    public:
    X()
    {
        height=0;
        width=0;

    }
    X(int h,int w)
    {
        height=h;
        width=w;
    }
    friend X operator+(X x,int i);
    void show()
    {
        cout<< "Height: "<<height<< " width: "<<width<<endl;
    }

};
X operator+(X x,int i)
{
    X temp;
    temp.height=x.height+i;
    temp.width=x.width+i;
    return temp;
}

int main()
{
   X x1(50,75),x2;
   x2=x1+25;
   x2.show();
    return 0;
}
