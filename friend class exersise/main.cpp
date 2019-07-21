#include <iostream>

using namespace std;
class A
{
    int x;
public:
    void setxx(int p)
    {
        x=p;
    }
    int getxx()
    {
        return x;
    }
    friend class B;
};
class B
{
    int x;
    public:
    void setx(int q)
    {
        x=q;
    }
    int getx()
    {
        return x;
    }
    int getclassA(A a)
    {  a.x=6;
       int p= a.getxx();
    return p;
    }

};



int main()
{ A ob;
    B oc;
    oc.setx(7);
    cout<< oc.getx()<<endl;
    cout<< oc.getclassA(ob)<<endl;
  return 0;
}
