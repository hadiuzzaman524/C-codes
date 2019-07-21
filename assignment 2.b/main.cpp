#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
class coord
{
    int x,y;
    char *pointname;
public:
    coord(int m=0,int n=0,char *s='\0')
    {
        x=m;
        y=n;
        pointname=strdup(s);
    }
    void print()
    {
        //cout<< x<< " "<< y<< " "<< pointname<<endl;
        printf("%d %d\n",x,y);
    }


   friend coord operator+(int x,coord &ob); // for ob=100+ob2
   friend coord operator+(coord o,coord p); // for ob1=ob2+ob3+ob4  but not working
   operator int();


};
coord operator+(int x,coord &ob)
{
    coord temp;
    temp.x=x+ob.x;
    temp.y=x+ob.y;
    temp.pointname=ob.pointname;
    return temp;
}
coord operator+(coord o,coord p)
{
    coord temp;
    temp.x=o.x+p.x; // x and y cannot declare in the scope but why? i call like ob2(ob3,ob4)
    temp.y=o.y+p.y;
    temp.pointname=o.pointname;
    return temp;
}
coord::operator int()
{
  /*int z;
  z=sqrt(x*x+y*y);
  return z;*/
  cout<<x<<y<<endl;
  return x+y;

}
int main()
{
    coord ob1,ob2(1,1,"LL"),ob3(2,2,"KK");
    coord ob4(3,3,"origin");
    //ob1=ob2+ob3+ob4;
    //ob1.print();
    ob1=100+ob4;
    ob1.print();
   int val=100+ob4;
   cout<<val<<endl;


    return 0;
}
