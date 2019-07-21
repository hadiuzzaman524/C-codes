#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "how many size of an array?";
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    cout<< "the sorted array is: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<< ar[i]<< "   ";
    }
    cout<<endl;
}
