#include <iostream>

using namespace std;
class matrix3
{
    int m[3][3];
public:
    matrix3(int temp[3][3])
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                m[i][j]=temp[i][j];
            }
        }

    }
    matrix3()
    {

    }
    void print()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<< m[i][j]<< " ";
            }
            cout<<endl;
        }
    }
    void operator--();
    void multiply(matrix3 &temp);
    matrix3 operator*(int t);
    matrix3 operator*(matrix3 &o);

};
void matrix3::operator--()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            m[i][j]=m[i][j]-1;
        }
    }
}
void matrix3::multiply(matrix3 &temp)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int sum=0;
            for(int k=0; k<3; k++)
            {
                sum=sum+m[i][k]*temp.m[k][j];
            }
            m[i][j]=sum;
        }

    }
}
matrix3 matrix3::operator*(int t)
{
    matrix3 temp;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            temp.m[i][j]=m[i][j]*t;
        }
    }
    return temp;
}
matrix3 matrix3::operator*(matrix3 &o)
{
    matrix3 temp;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int sum=0;
            for(int k=0; k<3; k++)
            {
                sum=sum+m[i][k]*o.m[k][j];
            }
            temp.m[i][j]=sum;
        }
    }
    return temp;
}
int main()
{
    int arr[3][3]= {2,2,2,2,2,2,2,2,2};
    matrix3 ob(arr),b(arr),c;
    ob.multiply(b);
    ob.print();
    cout<<endl;
    c=ob*10;
    c.print();
    cout<<endl;
    c=ob*b;
    c.print();
    cout<<endl;
    --c;
    c.print();
    return 0;
}
