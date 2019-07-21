#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<< "enter number: ";
   cin>>n;
   for(int i=0; i<n; i++)
   {    if(i%2==0)
        {
            cout<< "*";
        }
       for(int j=0; j<n; j++)
       {
           if(j%2==1)
           {
               cout<< "#";
           }
       }
       cout<< endl;
   }
}
