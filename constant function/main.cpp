#include <iostream>

using namespace std;
void fun(int x[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< x[i][j] << "  ";
        }
        cout<<endl;
    }
}
int main()
{
    int x[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>x[i][j];
        }
    }
    fun(x);
}
