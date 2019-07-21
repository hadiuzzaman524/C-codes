#include <iostream>
using namespace std;
void marge(int arr[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int la[n1];
    int ra[n2];

    for(int i=0; i<n1; i++)
    {
        la[i]=arr[p+i];
    }
    for(int i=0; i<n2; i++)
    {
        ra[i]=arr[q+1+i];
    }
    int j=0,l=0,k;
    for(int k=p; j<n1&&l<n2; k++)
    {
        if(la[j]<ra[l])
        {
            arr[k]=la[j];
            j++;
        }
        else
        {
            arr[k]=ra[l];
            l++;
        }
    }
    while(j<n1)
    {
        arr[k]=la[j];
        j++;
        k++;
    }
    while(l<n2)
    {
        arr[k]=ra[l];
        l++;
        k++;
    }


}

void marge_sort(int arr[],int p,int r)
{
    if(p>=r)
    {
        return;
    }
        int q=p+(r-p)/2;
        marge_sort(arr,p,q);
        marge_sort(arr,p+1,r);
        marge(arr,p,q,r);
}
int main()
{
    int i,n=8;
    int A[]={1,5,6,3,5,8,7,2,9};
    marge_sort(A,0,8);
     for( int i=0; i<8; i++)
    {
        cout<< A[i]<< " ";
    }
    cout<<endl;

}
