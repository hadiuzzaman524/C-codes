#include <iostream>
#include <cstring>
using namespace std;
class student
{
    string name;
    int roll;
    double gpa;
public:
    student()
    {
        //body
    }

    ~student()
    {

    }

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
        getline(cin,name);
        obj[i].setname(name);
        cout<< "enter your roll: ";
        cin>>roll;
        obj[i].setroll(roll);
        cout<< "enter your gpa: ";
        cin>>gpa;
        obj[i].setgpa(gpa);
        cin.ignore(1);
        cin.clear();
    }

    for(int i=0; i<5-1; i++)
    {
        for(int j=0; j<4-i; j++)
        {
            if(obj[j].getroll()>obj[j+1].getroll())
            {
                student temp=obj[j];
                obj[j]=obj[j+1];
                obj[j+1]=temp;
            }
        }
    }

    for(int i=0; i<5; i++)
    {
        cout<<obj[i].getname()<< "   "<< obj[i].getroll()<< "   "<< obj[i].getgpa()<<endl ;
    }

}

