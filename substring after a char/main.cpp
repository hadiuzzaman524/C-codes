#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    int pos=s1.find(":");
    cout<< s1.substr(pos+2);
}
