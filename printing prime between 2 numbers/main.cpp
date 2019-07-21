#include <iostream>

using namespace std;

int main()
{
    int lm1,lm2;
    cout<< "enter the first and last limit: ";
    cin>>lm1>>lm2;
    int n=lm2-lm1+1;
    int arr[n];
    for(int i=lm1; i<lm2; i++)
    {
        arr[i]=i;
        int p=1;
        for(int j=2; j<i; j++)
        {
            if(arr[i]%j==0)
            {
                p=0;
            }
        }
        if(p==1)
        {
            cout<<i<< " ";
        }

    }
}
