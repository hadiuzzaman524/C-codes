#include <iostream>

using namespace std;

int main()
{
   int i=10,*ptri;
   ptri=reinterpret_cast<int *>(i);
   cout<< ptri<<endl;
   ptri++;
   cout<< ptri<<endl;
   i=reinterpret_cast<int>(ptri);
   i++;
   cout<<i<<endl;
    return 0;
}
