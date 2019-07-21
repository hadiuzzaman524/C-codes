#include <iostream>

using namespace std;
class problem
{
    int x,y;
    public:
    problem(int s=0,int k=0)
    {
        x=s;
        y=k;
    }
    void setxy(int p,int q)
    {
        x=p;
        y=q;
    }
    void print()
    {
        cout<< "x is: "<< x<< " y is: "<< y<<endl;
    }
problem operator+(problem temp)
{
   problem result;
    result.x=temp.x+x;
    result.y=temp.y+y;
    return result;
}
problem operator%(int u)
{
    problem result;
    result.x=x%u;
    result.y=y%u;
    return result;
}
};
int main()
{
   problem obj1(4,5),obj2;
   obj1.print();
   obj2.print();
   obj2.setxy(8,9);
   obj2.print();
   problem obj3=obj1+obj2;
   obj3.print();
   obj3=obj3%3;//obj3.operator(3)
   obj3.print();
   return 0;
}
