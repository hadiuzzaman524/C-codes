#include <iostream>

using namespace std;
class point
{
    int x,y;
    public:
    point(int p=0,int q=0)
    {
        x=p;
        y=q;
    }
    void setpoint(int p,int q)
    {
        x=p;
        y=q;
    }
    void printpoint()
    {
        cout<< "x is: "<< x<< "   y is: "<<y<<endl;
    }
   /* point operator+(point temp)
    {
        point result;
        result.x=x+temp.x;
        result.y=y+temp.y;
        return result;

    }
    */
   point operator%(int p)
   {
       point temp;
       temp.x=x%p;
       temp.y=y%p;
       return temp;
   }
};
int main()
{
 point a(4,3),b;
 b.printpoint();
 b.setpoint(9,7);
 a=a%2;//a.operator%(2)
 a.printpoint();
 //point c;
 //c=a+b;//a.operator+(b)
 //c.printpoint();
    return 0;
}
