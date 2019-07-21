#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++)
    {
        int male=0;
        string s;
        getline(cin,s);

        int len=s.size();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='M')
            {
                male++;
            }
            else if(s[i]=='F')
            {
                male--;
            }
        }

        if(male==0 && s.size()>3)
        {
            cout<< "LOOP"<<endl;

        }
        else
        {
            cout<< "NO LOOP"<<endl;

        }
    }

    return 0;

}
