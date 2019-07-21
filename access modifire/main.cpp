#include <iostream>

using namespace std;
class parent
{
public:
    int x;
protected:
    int y;
private:
    int z;

};
class child:private parent
{
public:
    parent::x;
    void setvalue()
    {
        x=9;
        y=10;
    }
};

int main()
{
    child ob;
    ob.setvalue();
    cout<< ob.x<<endl;

    return 0;
}
