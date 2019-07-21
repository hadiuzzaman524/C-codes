#include <iostream>

using namespace std;
class point
{
private:
    int x,y;
public:
    void setpoint(int p,int q)
    {
        x=p;
        y=q;
    }
    void printpoint()
    {
        cout<< "x: "<<x<< " y: "<< y<<endl;
    }
};
class point2:public point
{
private:
    int z;
public:
    void set(int p,int q,int r)
    {
        setpoint(p,q);
        z=r;
    }
    void print()
    {
        printpoint();
        cout<< "z is: "<< z<<endl;
    }
};
int main()
{
   point2 obj;
   obj.set(1,2,3);
   obj.print();
    return 0;
}
