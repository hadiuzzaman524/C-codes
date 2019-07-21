#include <iostream>

using namespace std;
void swapvalue(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
   int p=5,q=9;
   swapvalue(p,q);
   cout<<p<< " "<<q<<endl;
}
