#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>> n;
   for(int i=0; i<n; i++)
   {
       cout<< "*";

   }
   cout<<endl;
    for(int i=0; i<n; i++)
   {
       cout<< "*";
   }
   cout<<endl;
   for(int i=n-2; i>0; i--)
   {
       for(int j=0; j<i; j++)
       {
           cout<< " ";
       }
       for(int j=0; j<=0; j++)
       {
           cout<< "*";
       }
       cout<<endl;
   }
    for(int i=0; i<n; i++)
   {
       cout<< "*";
   }
   cout<<endl;
   for(int i=1; i<n-1; i++)
   {
       for(int j=0; j<i; j++)
       {
           cout<< " ";
       }
       for(int j=0; j<=0; j++)
       {
           cout<< "*";
       }
        for(int j=n-2; j>i; j--)
       {
           cout<< " ";
       }
        for(int j=0; j<=0; j++)
       {
           cout<< "*";
       }
       cout<<endl;
   }
    for(int i=0; i<n; i++)
   {
       cout<< "*";
   }
   cout<<endl;


}
