#include <iostream>

using namespace std;
class test
{
    int a,b;
public:
    void setab(int x,int y)
    {
        a=x;
        b=y;

    }
    int getatimesb()
    {
        return a*b;
    }
};
int atimesbtimes10(test t)
{
    t.setab(10,10);
    return (t.getatimesb()*10);
}

int main()
{
    test tst;
    tst.setab(15,15);
    cout<< atimesbtimes10(tst)<<endl;
    cout<< tst.getatimesb();
}
