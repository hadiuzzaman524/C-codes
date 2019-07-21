#include <iostream>
#include <string.h>
using namespace std;
class stringlength
{
public:
    char *p;
    void print()
    {
        cout<< "\t"<< p<<"length of p is: "<<strlen(p)<<endl;
    }
    stringlength()
    {
        p=new char[50];
    }
   // stringlength(stringlength &);
};
/*stringlength::stringlength(stringlength &obj)
{
    //p=new char[50];
    strcpy(p,obj.p);
}*/
int main()
{
 stringlength str1;
 strcpy(str1.p,"my name is hadiuzzaman");
 cout<< "before assigning"<<endl;
 str1.print();
 stringlength str2=str1;
 cout<< "after assigning."<<endl;
 strcpy(str1.p,"my name is orpi ");
 str1.print();
 str2.print();
}
