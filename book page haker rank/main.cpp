#include <iostream>

using namespace std;

int main()
{
    int n,p;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=i;
    }
    cin>>p;
    int c=-1;
    for(int i=1; i<n; i++)
    {
        if(i%2==1)
        {
            if(p>=i)
                c++;
        }
        else if(p>=i)
            c++;

    }
    int c1=0;
    for(int i=n; i>1; i--)
    {
        if(i%2==1)
        {
            if(p<=i)
                c1++;
        }
        else if(p<=i)
            c1++;

    }
    if(c<c1)
    {
        cout<< c<<endl;
    }
    else
        cout<< c1<<endl;
}
