#include <iostream>

using namespace std;

int main()
{
  int row,col;
  cin>>row;
  cin>>col;
  int **x;
  x=new int*[row];
  for(int i=0; i<row; i++)
  {
      x[i]=new int[col];
  }
  for(int i=0; i<row; i++)
  {
      for(int j=0; j<col; j++)
      {
          cin>>x[i][j];
      }
  }
  for(int i=0; i<row; i++)
  {
      for(int j=0; j<col; j++)
      {
          cout<< x[i][j]<< "   ";
      }
      cout<<endl;
  }
}
