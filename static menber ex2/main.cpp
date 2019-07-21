#include <iostream>

using namespace std;
class hadi
{
    static int x,y;
public:
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    void printxy()
    {
        cout<< x<< "      "<<y<<endl;
    }
};
int hadi::x;
int hadi::y;
int main()
{
    hadi s1,s2;
    s1.setxy(3,4);
    s1.printxy();
    s2.printxy();
    s2.setxy(5,67);
    s1.printxy();
}
