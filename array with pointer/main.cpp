#include <iostream>

using namespace std;

int main()
{
    int row;
    cin>>row;
    int *x=new int[row];
    for(int i=0; i<row; i++)
    {
        cin>>*(x+i);
    }
    for(int i=0; i<row; i++)
    {
        cout<<*(x+i)<< "   ";
    }
}
