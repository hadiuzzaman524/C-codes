#include <iostream>

using namespace std;
void fun(int a[][2],int b[][2],int m,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
            cout<< a[i][j]+b[i][j]<<" " ;
        cout<<endl;
    }
}
int main()
{
    int x[][2]={1,2,3,4,5,6};
    int y[][2]={1,2,3,4,5,6};
    fun(x,y,3,3);
}
