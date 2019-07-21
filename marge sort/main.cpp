#include <iostream>

using namespace std;
void marge_sort(int ar[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int la[n1];
    int ra[n2];
    for(int i=0; i<n1; i++)
    {
        la[i]=ar[p+i];
    }
    for(int i=0; i<n2; i++)
    {
        ra[i]=ar[q+1+i];
    }
    int j=0,k=0,m=p;
    while(j<n1&&k<n2)
    {
        if(la[j]<=ra[k])
        {
            ar[m]=la[j];
            j++;
        }
        else
        {
            ar[m]=ra[k];
            k++;
        }
        m++;
    }
    while(j<n1)
    {
        ar[m]=la[j];
        j++;
        m++;
    }
    while(k<n2)
    {
        ar[m]=ra[k];
        k++;
        m++;
    }
}
void marge(int ar[],int p,int r)
{
    if(p<r)
    {
        //int q=p+(r-p)/2;
        int q=(p+r)/2;
        marge(ar,p,q);
        marge(ar,q+1,r);
        marge_sort(ar,p,q,r);
    }
}

int main()
{
   int ar[]={2,4,56,7,5,44,39};
   marge(ar,0,7);
   for(int i=0; i<7; i++)
    cout<< ar[i]<< " ";
   cout<<endl;

    return 0;
}
