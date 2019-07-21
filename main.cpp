#include <iostream>

using namespace std;
void matrix_print(int xx,int yy,int zz,int **m,int **n)
{
    int **result;
    result=new int*[xx];
    for(int i=0; i<xx; i++)
    {
        result[i]=new int[yy];
    }
    cout<< "the result is: "<<endl<<endl;
    for(int i=0; i<xx; i++)
    {
        for(int j=0; j<yy; j++)
        {   int sum=0;
            for(int k=0; k<zz; k++)
            {
                sum=sum+m[i][k]*n[k][j];
            }
            result[i][j]=sum;
           // cout<< sum<< "  ";
        }
       // cout<<endl<<endl;
    }
    for(int i=0; i<xx; i++)
    {
        for(int j=0; j<yy; j++)
        {
            cout<< result[i][j]<< "   ";
        }
        cout<<endl;
    }
}
int main()
{
   int r1,c1,r2,c2;
    cout<< "enter the row and column in first matrix:" ;
    cin>>r1>>c1 ;
    cout<< "enter the second matrix row and column:";
    cin>>r2>>c2;
    int **x;
    x=new int *[r1];
    for(int i=0; i<r1; i++)
    {
        x[i]=new int[c1];
    }
    cout<< "enter the first matrix in row major order: "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>x[i][j];
        }
    }
    int **y;
    y=new int*[r2];
    for(int i=0; i<r2; i++)
    {
        y[i]=new int[c2];
    }
    cout<< "enter the second matrix in row major order: "<<endl;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>y[i][j];
        }
    }
    matrix_print(r1,c2,c1,x,y);





    return 0;
}
