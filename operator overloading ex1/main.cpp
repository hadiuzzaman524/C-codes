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
        cout<< x<< "    "<< y<<endl;
    }
    point operator+(point &ob)
    {
        point temp;
        temp.x=x+ob.x;
        temp.y=y+ob.y;
        return temp;
    }
    point operator++(int x)
    {
        this->x=this->x+1;
        this->y=this->y+1;
        return *this;
    }
    point operator++()
    {
        this->x=this->x+1;
        this->y=this->y+1;
        return *this;
    }
    friend point operator+(int x,point &ob);
    point operator+(int m)
    {
        point temp;
        temp.x=x+m;
        temp.y=y+m;
        return temp;
    }
    point operator%(int m)
    {
        point temp;
        temp.x=x%m;
        temp.y=y%m;
        return temp;
    }
    friend  void operator<<(ostream &o, point &p);

};
point operator+(int n,point &ob)
{
    point temp;
    temp.x=n+ob.x;
    temp.y=n+ob.y;
    return temp;
}
void operator<<(ostream &o, point &p)
{
    o << p.x;
    o<< p.y;
}
int main()
{
    point a(4,3),b;
    b.printpoint();
    b.setpoint(9,7);
    b.printpoint();
    point c;
    c=a+b;
    c.printpoint();
    c++;
    c.printpoint();
    ++c;
    c.printpoint();
    c=100+a;
    c.printpoint();
    c=a+100;
    c.printpoint();
    a.printpoint();
    a=a%2;
    a.printpoint();
    cout<<a;


    return 0;
}
