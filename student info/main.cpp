#include <iostream>
#include <cstring>
using namespace std;
class student
{
    string name;
    int roll;
    double gpa;
public:
    void setname(string s)
    {
        name=s;
    }
    void setroll(int x)
    {
        roll=x;
    }
    void setgpa(double gp)
    {
        gpa=gp;
    }
    string getname()
    {
        return name;
    }
    int getroll()
    {
        return roll;
    }
    double getgpa()
    {
        return gpa;
    }
};
int main()
{
    student obj[5];
    string name;
    int roll;
    double gpa;
    for(int i=0; i<5; i++)
    {
        cout<< "enter your name:";
        cin>>name;
        obj[i].setname(name);
        cout<< "enter your roll: ";
        cin>>roll;
        obj[i].setroll(roll);
        cout<< "enter your gpa: ";
        cin>>gpa;
        obj[i].setgpa(gpa);

    }
    double big=obj[0].getgpa();
    string bigname;
    int bigroll;
    for(int i=0; i<5; i++)
    {
        if(obj[i].getgpa()>big)
        {
            big=obj[i].getgpa();
            bigname=obj[i].getname();
            bigroll=obj[i].getroll();
        }

    }
    cout<< "height gpa is: "<< big<< " NAME: "<< bigname<< " ROLL: "<< bigroll<<endl;
}
