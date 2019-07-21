#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
    int *x,*y;
public:
    void setxy(int p,int q)
    {
        x=new int ;
        *x=p;
        y=new int ;
        *y=q;
    }
    void printxy()
    {
        cout<< x<< "\t"<< y<<endl;
        printf("%d%d\n",*x,*y);
        printf("%d%d\n",x,y);
    }
};

int main()
{
    student s,p;
    s.setxy(5,6);
    p.setxy(8,9);
    s.printxy();
    p.printxy();
    s=p;
    s.printxy();
    p.printxy();
    return 0;
}
