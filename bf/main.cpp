#include <iostream>
using namespace std;
void hanoi(int disk,char start,char mid,char endd)
{
    if(disk==1)
    {
        cout<< start<< "->"<<endd<<endl;
    }
    else
    {
        hanoi(disk-1,start,endd,mid);
        cout<< start<< "->"<<endd<<endl;
        hanoi(disk-1,mid,start,endd);

    }
}

int main()
{
    hanoi(2,'a','b','c');

    return 0;
}
