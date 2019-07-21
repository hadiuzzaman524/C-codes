#include <iostream>

using namespace std;
class animal
{
    int *age;
public:
    animal(int arg=0)
    {
        age=new int;
        *age=arg;
    }
    void setvalue(int arg)
    {
        age=new int;
        *age=arg;
    }
    animal( animal &ob)
    {
        age=new int;
        *age=*(ob.age);
    }
    ~animal()
    {
        delete age;
    }
    void print()
    {
        cout<< *age<<endl;
    }

};

int main()
{
    animal o(7);
{

   animal p = o;
    p.setvalue(90);
    p.print();
}



    o.print();
    return 0;
}
