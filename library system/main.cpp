#include <iostream>
#include <cstring>
using namespace std;
class library
{
    string name[5];
    int number[5];
    int avaliable[5];
    static int totalbook;
public:
    void setlibrary()
    { int countt=0;
        cout<< "enter the five book name and their ammount:\n";
        for(int i=0; i<5; i++)
        {
            cout<< "enter the name of books: ";
            getline(cin,name[i]);
            cout<< "how many books: ";
            cin>>number[i];
            countt+=number[i];
            avaliable[i]=number[i];
            cin.ignore(1);
            cin.clear();
    cout<<endl;
        }
        totalbook=countt;
    }
    void printsummary()
    {   cout<<"book name:\t\tammount: \t\tavaliable:\n";
        for(int i=0; i<5; i++)
        {
           cout<< name[i]<< "\t\t\t"<< number[i]<< "\t\t\t"<<avaliable[i]<<endl;
        }
        cout<< ".................................................................."<<endl;
        cout<< "                                        total book is:"<< totalbook<<endl;
        cout<<endl;
    }
    void bookissue(string s)
    {
        for(int i=0; i<5; i++)
        {
            if(name[i]==s)
            {
                avaliable[i]-=1;
                totalbook-=1;
            }
        }
    }
};
int library::totalbook=0;
int main()
{
    library cse;
    cse.setlibrary();
    cse.printsummary();
    cse.bookissue("c++");
    cse.printsummary();

    return 0;
}
