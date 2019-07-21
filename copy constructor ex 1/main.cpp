#include <iostream>

using namespace std;
class  c
{
    int *x;
    int size;
public:
    void setx(int p)
    {
        x=new int;
        *x=p;
    }


    void print()
    {
        cout<< *x<<endl;
    }

    ~c()
    {
        delete x;
    }
};
int main()
{

    c obj(7);
    c obj2=obj;
    obj2.setx(9);
    obj2.print();
    obj.print();

    return 0;
}
