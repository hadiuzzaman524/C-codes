#include <iostream>

using namespace std;
class s
{
    int x,y;
    static int coun;
public:
    void sett(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<< coun<<endl;
    }
    s()
    {
        coun++;
    }
 ~s()
 {
     coun--;
 }

};
int s::coun=0;
int main()
{
    s x,y;
    x.print();
    {
        s v;
        v.print();
    }
    x.print();
    y.print();
}
