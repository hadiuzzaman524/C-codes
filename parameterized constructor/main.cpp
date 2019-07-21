#include <iostream>

using namespace std;
class parent
{
protected:
    double x,y;
public:
    parent(double p,double q)
    {
        x=p;
        y=q;
    }
  virtual  void printarea()
    {
        cout<< "parent class: "<< x+y<<endl;
    }
};
class triangle:public parent
{
public:
    triangle(double p,double q):parent(p,q)
    {
        x=p,y=q;
    }
    void printarea()
    {
        cout<< "the area is: "<< 0.5*x*y<<endl;
    }
};
class rectangle:public parent
{ public:
    rectangle(double p,double q):parent(p,q)
    {
        x=p;
        y=q;
    }
    void printarea()
    {
        cout<< "area is: "<< x*y<<endl;
    }
};
int main()
{
   triangle ob(5.0,7.8);
   ob.printarea();
   rectangle obr(6.4,4);
   obr.printarea();
   ob.parent::printarea();
   obr.parent::printarea();
   cout<< "using pointer output is under blew>>>>>>>>>>>>>>"<<endl<<endl<<endl;
   parent *p;
   p=&ob;
   p->printarea();
   p=&obr;
   p->printarea();
    return 0;
}
