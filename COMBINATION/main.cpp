#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int start, first, second, third;

    cin>>start>>first>>second>>third;

    while (start || first || second || third)
    {
        printf("%d\n", 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);

       cin>>start>>first>>second>>third;
    }
    return 0;
}
