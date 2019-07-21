#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=2; i<9; i++)
  {
      if(n%i==0)
        n=n/i;
      cout<<n;

  }
  return 0;
}
