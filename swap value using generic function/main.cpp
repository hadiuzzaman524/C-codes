#include <iostream>

using namespace std;
template <typename t>
void wap( t *x,t *y)
{
    t temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
   double x=7.9;
   double y=9.34;
   swap(x,y);
   cout<<x<<y<<endl;
    return 0;
}
