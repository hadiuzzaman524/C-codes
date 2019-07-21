#include <iostream>

using namespace std;
class complex
{
    double real,immaginary;
    public:
    complex(double p=0,double q=0)
    {
        real=p;
        immaginary=q;
    }
    complex operator+(complex &temp);
    complex operator+(int temp);
    complex operator++();
    void print()
    {
        cout<< real<< " + i"<<immaginary<<endl;
    }
    friend complex operator+(int x,complex &temp);
    friend void operator<<(ostream &os,complex &temp);
};
complex complex::operator+(complex &temp)
{
    complex temp2;
    temp2.real=real+temp.real;
    temp2.immaginary=immaginary+temp.immaginary;
    return temp2;
}
complex complex::operator+(int x)
{
    complex temp;
    temp.real=real+x;
    temp.immaginary=immaginary+x;
    return temp;
}
complex complex::operator++()
{
    real=real+1;
    immaginary=immaginary+1;
    return *this;
}
complex operator+(int x,complex &temp)
{

    temp.real=temp.real+x;
    temp.immaginary=temp.immaginary+x;
    return temp;
}
void operator<<(ostream &os,complex &temp)
{
    os<<temp.real;
}
int main()
{
    complex ob(3,3),ob2(4,4),ob3;
    ob3=ob+ob2;
    ob3.print();
    ++ob3;
    ob3.print();
    ob3=ob+30;
    ob3.print();
    ob3=30+ob3;
    ob3.print();
    cout<<ob3;

    return 0;
}
