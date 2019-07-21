#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,i,j,c,count=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(i=0; i<n; i++)
    {
        c=1;
        if(arr[i]!=0)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                    arr[j]=0;
                }
            }
            count+=c/2;
        }
    }

    printf("%d",count);
}

