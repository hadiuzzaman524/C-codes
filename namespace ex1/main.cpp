#include <iostream>
using namespace std;
namespace st
{
    class x
    { int m;
    public:
        x(int n)
        {
            m=n;
        }
        void setvalue()
        {
            cout<< "enter input: ";
            cin>>m;
        }
        void print()
        {
            cout<< "the number is: "<<m<<endl;
        }
    };
}
namespace st2
{
    int x=8;
}

int main()
{ st::x ob(8);
ob.setvalue();
ob.print();
  cout<<st2::x;
    return 0;
}
