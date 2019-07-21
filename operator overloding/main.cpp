#include <iostream>

using namespace std;
class point
{
    int x,y;
public:
    void setxy(int p,int q)
    {
        x=p;
        y=q;
    }
    void printxy()
    {
        cout<< "x is: "<< x<< " y is: "<<y<<endl;
    }
    void operator=(point p);

};
void point::operator=(point p)
{
    x=77;
    y=88;
}


int main()
{
    point var1,var2;
    var1.setxy(5,6);
    var2.setxy(7,8);
    var1=var2;
    var1.printxy();
    var2.printxy();

}
