#include <iostream>

using namespace std;
class office
{
    int employee_no;
    double salary_employe;
    static double total;
public:
    static void takemoney(double t)
    {
        total=total-t;
    }
    static void remmoney()
    {
        cout<< "remining money is : "<<total<<endl;
    }
};
double office::total=100;
int main()
{
   office library,csedept,eeedept;
   library.remmoney();
   library.takemoney(20);
   csedept.takemoney(30);

   office::remmoney();
}
