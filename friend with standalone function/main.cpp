#include <iostream>

using namespace std;
void show();
class A
{
    int x;
public:
    void setx(int p)
    {
        x=p;
    }
    friend void show(A a);
};
void show(A a)
{
    cout<< a.x<<endl;
}
int main()
{
    A a;
    a.setx(8);
    show(a);
    return 0;
}
