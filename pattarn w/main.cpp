#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "enter number: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<< "#";
    }
    cout<< endl;
    for(int i=1; i<n-2; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<< " ";
        }
        cout<< "#\n";
    }
    cout<< endl;
    for(int i=0; i<n; i++)
    {
        cout<< "#";
    }
}
