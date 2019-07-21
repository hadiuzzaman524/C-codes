#include <iostream>

using namespace std;
template <typename t,typename t2>
t2 add(t x,t2 y)
{
    return x+y;
}
int main()
{
   cout<< add(8,4.5)<<endl;
    return 0;
}
