//there are 4 cast in c++
//1.static_cast
//2.dynamic_cast
//3.reinterpret_cast
//4.const_cast


// example for dynamic_cast
#include <iostream>

using namespace std;
class xx
{
    int m;
public:
  xx(int p)
  {
      m=p;
  }
virtual void showinfo()
    {
        cout<< "this is base class"<<endl;
    }
};
class yy: public xx
{
    int m;
public:
    yy(int x):xx(8)
    {
        m=x;
    }
    void showinfo()
    {
        cout<< "this is derived class."<<endl;
    }
    void print()
    {
        cout<< "derived class result: "<< m<<endl;
    }
};
int main()
{ cout<< "dynamic cast result is: "<< endl;
    xx ob(8);
    yy ob2(9);
    ob.showinfo();
    xx *p;
    p=&ob2;
    yy *p2=dynamic_cast <yy*>(p);// dynamic_cast
    p2->print();
    p2->showinfo();

cout<< "\nstatic cast result is: "<<endl;
    int i=6;
    double  d;
    d=static_cast<double>(i); // static cast
    cout<<d<<endl;
cout<< "\nreinterpret cast result is: "<<endl;
int j=66;
int *ptri;
char *ptrc;
ptri=&j;
ptrc=reinterpret_cast<char*>(ptri);//reinterpret_cast
cout<< *ptrc;

    return 0;
}
