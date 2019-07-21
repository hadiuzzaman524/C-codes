#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int j,k;
        cin>>j>>k;
        if(j>k)
            cout<< ">"<<endl;
        else if(j<k)
        {
            cout<< "<"<<endl;
        }
        else
            cout<< "="<<endl;
    }
    return 0;
}
