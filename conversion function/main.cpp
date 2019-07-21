#include <iostream>

using namespace std;
class p
{
public:
    int x,y;
    p(int m,int n)
    {
        x=m;
        y=n;
    }
    operator double()
    {
        return x*y;
    }
};
int main()
{
    p obj(6,9);
    double x;
    x=obj;
    cout<<x;
    return 0;
}
