#include <iostream>

using namespace std;
class student
{
    int x;

public:
    student(int a=5)
    {
        x=a;

    }
    void printx()
    {
        cout<<x<<endl;
    }
};
int main()
{
    student s1(6);
    student s2;
    s1.printx();
    s2.printx();

}
