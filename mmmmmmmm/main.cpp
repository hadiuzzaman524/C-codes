#include <iostream>
using namespace std;
void marge(int arr[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int la[n1],ra[n2];
    for(int i=0; i<n1; i++)
    {
        la[i]=arr[p+i];
    }
    for(int j=0; j<n2; j++)
    {
        ra[j]=arr[q+1+j];
    }
    int i=0;
    int j=0;
    int k=p;
    while(i<n1&&j<n2)
    {
        if(la[i]<=ra[j])
        {
            arr[k]=la[i];
            i++;
        }
        else
        {
            arr[k]=ra[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=la[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=ra[j];
        j++;
        k++;
    }
}
void marge_sort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q=p+(r-p)/2;
        marge_sort(arr,p,q);
        marge_sort(arr,q+1,r);
        marge(arr,p,q,r);
    }
}
int main()
{
    int n;
    int A[]={1,5,6,3,5,8,7,2,9};
    n=sizeof(A)/sizeof(A[0]);
    marge_sort(A,0,n-1);
    for(int i=0; i<=n; i++)
        cout<< A[i]<< "   ";
    cout<<endl;
}
