#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

int main()
{
   string s("hello world");
   string p("jaman");

  // s.insert(1,"m");
  cout<<s;
   s.replace(0,1,"m");
   cout<<s<<endl;

    return 0;
}
