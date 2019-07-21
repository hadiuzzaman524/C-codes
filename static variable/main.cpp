#include <iostream>

using namespace std;
class student
{
    int x;
    static int totalmoney;
public:
    void getmoney(int a)
    {   x=a;
        totalmoney=totalmoney-x;
    }
    static void remmoney()
    {
        cout<<"remaining money is: "<<totalmoney<<endl;
    }
};
int student::totalmoney=500;
int main()
{
   student s1,s2;
   s1.getmoney(100);
   student::remmoney();
   s2.getmoney(50);
   s2.remmoney();



}
