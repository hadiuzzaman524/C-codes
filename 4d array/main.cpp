#include <iostream>

using namespace std;

int main()
{
    int r1,r2,c1,c2;
    r1=2,r2=2,c1=2,c2=2;
    int arr[r1][c1][r2][c2];
    for(int i1=0; i1<r1; i1++)
    {
        for(int i2=0; i2<c1; i2++)
        {
            for(int i3=0; i3<r1; i3++)
            {
                for(int i4=0; i4<c2; i4++)
                {
                    cin>> arr[(i1*r2*c1*c2+i2*c1*c2+i3*c2+i4)];
                }
            }
        }
    }
    return 0;
}
