#include <iostream>

using namespace std;

int main()
{
  int r,c;
  cout<< "how many row and column in the array?";
  cin>>r>>c;
  int arr[r][c];
  for(int i=0; i<r; i++)
  {
      for(int j=0; j<c; j++)
      {
          cin>>arr[i][j];
      }
  }
  int small=arr[0][0];
  int indexi=0,indexj=0;
  for(int i=0; i<r; i++)
  {
      for(int j=0; j<c; j++)
      {
          if(small>arr[i][j])
          {
              small=arr[i][j];
              indexi=i;
              indexj=j;
          }
      }
  }
  cout<< "the small number is: "<<small<< "\nfound the index["<<indexi<< "]"<<"["<<indexj<<"]"<<endl;
}
