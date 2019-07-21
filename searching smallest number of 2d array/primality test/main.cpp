#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<< "enter any number: ";
   cin>>n;
   int prime=1;
   for(int i=2; i<n; i++)
   {
       if(n%i==0)
       {
           prime=0;
       }
   }
   if(prime==1)
   {
       cout<< "the number is prime.";
   }
   else
   {
       cout<< "the number is not prime.";
   }
}
