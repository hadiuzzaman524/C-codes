#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cout<< "how many rows and columns are there?";
    cin>>row>>col;
    int **x;
    x=new int*[row];
    for(int i=0; i<row; i++)
    {
        x[i]=new int[col];
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>x[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<< x[i][j]<< "\t";
        }
        cout<<endl;
    }

    int a[row*col];
    cout<<endl;
    cout<< "print all of the element of row major order: \n";
    int k=0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
             a[k]=x[i][j];
             ++k;

        }
    }
    for(int i=0; i<row*col; i++)
    cout<< a[i]<<endl;

    int b[row*col];
    int l=0;
    cout<<endl;
    cout<< "print all of the element of column major order: \n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
           b[l]=x[j][i];
           ++l;
        }
    }
    for(int i=0; i<row*col; i++)
    {
        cout<< b[i]<<endl;
    }
}
