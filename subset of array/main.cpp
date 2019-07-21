#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
   int arr[]={1,2,3};
   int n=sizeof(arr)/sizeof(int);
   int k=pow(2,n);
   int sum[k];
   int i=0;
   int sumall=0;
   while(i<n)
   {
       sumall+=arr[i];
       i++;
   }
   sum[0]=sumall;
   int m=1;
   for(int i=0; i<n;  i++)
   {
       sum[m]=arr[i];
       m++;
   }

   for(int i=0; i<n; i++)
   {    static int hadi=1;
       while(hadi<n)
       {
           sum[m]=arr[i]+arr[hadi];
           m++;
           hadi++;
       }
   }
   sum[m]=0;
for(int i=0; i<k-1; i++)
{
        cout<< sum[i]<< " ";


}


    return 0;
}
