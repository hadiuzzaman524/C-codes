#include <iostream>

using namespace std;
class person
{
    protected:
    string name;
    string nid;
public:

    person(string nam,string id)
    {
        name=nam;
        nid=id;
    }
    void setname(string nam)
    {
        name=nam;
    }
    string getname()
    {
        return name;
    }
    void setnid(string ni)
    {
        nid=ni;
    }
    string getnid()
    {
        return nid;
    }
};
class student:virtual public person
{
protected:

    string roll;
    string dept;
    string sessionn;
public:
    student(string nm,string i,string r,string de,string se):person(nm,i)
    {
        roll=r;
        dept=de;
        sessionn=se;
    }
    void setinfo(string r,string p, string q)
    {
        roll=r;
        dept=p;
        sessionn=q;
    }
    void print()
    {
        cout<< "roll: "<<roll<<endl;
        cout<< "dept: "<<dept<<endl;
        cout<< "session: "<<sessionn<<endl;
    }

};
class employe:virtual public person
{ protected:

    string employeid;
    string designation;
    string joinyymmdd;
   public:
    employe(string s,string p,string q,string m, string n):person (s,p)
    {
        employeid=q;
        designation=m;
        joinyymmdd=n;

    }
    void setinfo(string s,string p,string q)
    {
        employeid=s;
        designation=p;
        joinyymmdd=q;
    }
    void printinfo()
    {
        cout<< "name: "<<name<<endl;
        cout<< "nid : "<<nid<<endl;
        cout<< "employe id: "<<employeid<<endl;
        cout<< "designation: "<< designation<<endl;
        cout<< "joinyymmdd: "<< joinyymmdd<<endl;
    }
};
class phd_candidate:public employe,public student
{
    string enrolldate;
    string specialization;
    public:
    phd_candidate(string na,string nid,string id,string des, string joi,string r,string de,string se,string enr,string spe):
        employe(na,nid,id,des,joi),student(na,nid,r,de,se),person(na,id)
    {
        enrolldate=enr;
        specialization=spe;
    }
    void printphd()
    {
        cout<< "name: "<<name<<endl;
        cout<< "nid : "<<nid<<endl;
        cout<< "employe id: "<<employeid<<endl;
        cout<< "designation: "<< designation<<endl;
        cout<< "joinyymmdd: "<< joinyymmdd<<endl;
        cout<< "enrolldate: "<<enrolldate<<endl;
        cout<< "specialization: "<<specialization<<endl;

    }
};

int main()
{
    employe ob("hadi","1234","655","student","15.11.2017");
    ob.printinfo();
    cout<<endl;
    phd_candidate ob1("jaman","62344556","65","student","23.9.98","12","student","19","2.6.19","math");
    ob1.printphd();

    return 0;
}
