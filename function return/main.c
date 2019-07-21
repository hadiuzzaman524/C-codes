#include <stdio.h>
#include <stdlib.h>
int func(int *a,int *b)
{
   int sum=(*a+*b);
    return &sum;

}
int main()
{
    int n,m;
    n=10;
    m=20;
    int z=func(&n,&m);
    printf("%d",z);
}
