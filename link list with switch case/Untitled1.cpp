#include <iostream>
#include <thread>
using namespace std;

void fun(int *result, int n, int m[])
{
    int i;
    for(i=0;i<n;i++)
     {
         *result+=m[i];
     }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int n=12;
    int a=0,b=0,c=0;

    std::thread t1(fun, &a, n/3,arr);
    std::thread t2(fun, &b, n/3,arr+(n/3));
    std::thread t3(fun, &c, n/3,arr+(2*n/3));
    t1.join();
    t2.join();
    t3.join();
    cout<<"\nt1 sum: "<<a    <<"\nt2 sum:  "<<b    <<"\nt3 sum "<<c;
}

