#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    string s;
    string p;


    getline(cin,s);
    int len=s.size();
    string n;
    int j=0;
    for(int i=0; i<len; i++)
    {
       if(s[i]=='.'&& s[i]=='!')
       {
           n[i]=s[i];

       }
       else
       {
           p[j]=s[i];
       }
       j++;

    }
 cout<< p;
 cout<<n;
    return 0;
}
