#include <iostream>

using namespace std;

int main()
{
  int num,rem,rev;
  rev=0;
  cin>>num;
  int temp=num;
  while(num>0)
  {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
  }
  cout<< rev<<endl;
  if(rev==temp)
  {
      cout<< "the number is palindrome."<<endl;
  }
  else
    cout<< "the number is not palindrome."<<endl;
}
