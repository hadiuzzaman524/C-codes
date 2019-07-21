#include <iostream>
#include <cstring>
using namespace std;
int main()
{
   string s1("bangladesh");
   string s2;
   int p;
   cout<< "enter the position you insert the pattern?";
   cin>>p;
   cout<<"enter the pattern?";
   cin>>s2;
   cout<< s1.insert(p,s2);

}
