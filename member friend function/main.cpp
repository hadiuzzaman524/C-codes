#include <iostream>

using namespace std;
class cse;
class varsity
{
    int x,y;
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    void printxy(cse &);
};
class cse
{
    int x,y;
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    friend
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
