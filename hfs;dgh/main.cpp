#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
       cin>>arr[i];
   }
   for(int i=0; i<n; i++)
    cout<< arr[i]<< "    ";
   cout<<endl;
   int p,item;
   cout<< "enter the position : ";
   cin>>p;
   cout<< "enter the item: ";
   cin>>item;
   int j=n;
   n=n+1;
   while(p<=j)
   {
       arr[j+1]=arr[j];
       j=j-1;
   }
   arr[p]=item;
   for(int i=0; i<n; i++)
   {
       cout<< arr[i]<< "     ";
   }
   cout<<endl;
}
