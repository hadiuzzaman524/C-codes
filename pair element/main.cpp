#include <iostream>

using namespace std;

int main()
{
    int arr[6]={-2,-1,0,1,2,3};
    int count=0;
    for(int i=0; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(arr[i]+arr[j]<2)
            {
               cout<< "( "<<arr[i]<< ","<< arr[j]<< ")"<<endl;
            }
        }
    }

    return 0;
}
