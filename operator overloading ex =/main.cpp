#include <iostream>

using namespace std;
class jaman
{
    int x;
    string name;
    public:
    void setxname(int p,string n)
    {
        name=n;
        x=p;
    }
    void print()
    {
        cout<<name<< '\t'<< x<<endl;
    }
    void operator=(jaman j);
};
void jaman::operator=(jaman j)
{
    name="ashrafi akter.";
    x=11;
}

int main()
{
    jaman j,k;
    j.setxname(4,"hadiuzzaman");
    k=j;
    j.print();
    k.print();
    return 0;
}
