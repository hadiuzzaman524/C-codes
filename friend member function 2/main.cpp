#include <iostream>

using namespace std;
class jaman;
class orpi
{
    int x;
    string name;
    public:
    void setorpi(int p,string s)
    {
        x=p;
        name=s;
    }

    void showorpi(jaman j);

};
class jaman
{
    int x;
    string name;
public:
    void setjaman(int n,string p)
    {
        x=n;
        name=p;
    }
    friend void orpi::showorpi(jaman j);
};
void orpi::showorpi(jaman j)
{
    cout<< name<< "    "<< x<<endl;
    cout<< j.name<< "   "<< j.x<<endl;


}

int main()
{
    orpi s;
    s.setorpi(6,"ashrafi akter");
    jaman j;
    j.setjaman(88,"jaman");
    s.showorpi(j);

}
