#include <iostream>

using namespace std;
template <typename t,typename t2>
int showmax(t x,t2 y)
{
    int xxx=sizeof(x);
    int yyy=sizeof(y);
    return xxx>yyy?xxx:yyy;
}
int main()
{ int a=showmax(88,9.09);
    cout<<a<<endl;
    return 0;
}
