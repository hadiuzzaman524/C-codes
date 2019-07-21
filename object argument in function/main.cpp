#include <iostream>

using namespace std;
class student
{
    int x,y;
    public:
    student(int a,int b)
    {
        x=a;
        y=b;
    }
    int getresult()
    {
        return x+y;
    }
};
void fun(student obj);

int main()
{
    student a(6,6);
    fun(a);
}
void fun(student obj)
{
   int t= obj.getresult();
   cout<< "the result is: "<< t<<endl;
}
