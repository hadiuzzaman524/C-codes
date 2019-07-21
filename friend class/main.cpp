#include <iostream>

using namespace std;
class student
{
    int x;
public:
    student()
    {
        x=0;
    }
    void setx(int a)
    {
        x=a;
    }
    friend class teacher;
};
class teacher
{
    int y;
public:
    teacher()
    {
        y=0;
    }
    void setxy(student &obj)
    {
        y=obj.x+25;
        obj.x=50;
    }
    void showbase(student obj)
    {
        cout<< obj.x<<endl;
        cout<< y<<endl;
    }


};
int main()
{
    student a1;
    teacher b1;
    a1.setx(10);
    b1.setxy(a1);
    b1.showbase(a1);
}
