#include <iostream>

using namespace std;

int main()
{
    int fb1=0,fb2=1,fb3,limit;
    cout<< "enter the limit of the fibonacci series: ";
    cin>>limit;
    cout<<fb1<< " ";
    cout<< fb2<< " ";
    int coun=2;
    while(coun<=limit)
    {
        fb3=fb1+fb2;
        coun++;
        cout<<fb3<< " ";
        fb1=fb2;
        fb2=fb3;
    }
}
