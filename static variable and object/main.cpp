#include <iostream>
using namespace std;
class baust
{
    double taka;
   double total=6;
public:
    baust(double t)
    {
        total=total-t;
    }
    void remining()
    {
        cout<< total<<endl;
    }
};
//double baust::total=50;
int main()
{
    baust cse(4);
    cse.remining();

}
