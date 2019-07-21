#include <iostream>

using namespace std;
template <typename d>
class myclass
{
     int size;
     d *m;
 public:
    myclass(int n)
    {
        size=n;
        m=new d[n];
    }
    void add()
    {
        d sum=0;
        for(int i=0; i<size; i++)
        {
            sum+=m[i];
        }
        cout<<sum<<endl;
    }
    void getvalue()
    {
        for(int i=0; i<size; i++)
            cin>>m[i];
    }
 };
int main()
{
myclass<float>o(5);
o.getvalue();
o.add();

    return 0;
}
