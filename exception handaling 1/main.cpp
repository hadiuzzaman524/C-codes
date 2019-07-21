#include <iostream>

using namespace std;

int main()
{
          int m,n;
          cin>>m>>n;
          try
          {
              if(n==0)
                throw 1;
              cout<<m/n<<endl;
          }
          catch(int x)
          {
              cout<< "error exception."<<endl;
          }
    return 0;
}
