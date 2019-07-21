#include <iostream>

using namespace std;

int main()
{
   int run,ball;
   cin>>run>>ball;
   int rate;
   try
   {
       if(ball==0)
        throw "Zero Ball";
       cout<<"strike rate of the batsman is: "<< (run/ball)*100<<endl;
   }
   catch(const char *s)
   {
       cout<< s<<endl;
   }
    return 0;
}
