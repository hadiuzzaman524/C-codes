#include <iostream>

using namespace std;

int main()
{
   int r,c;
   cout<< "how many row and column in the matrix: ";
   cin>>r>>c;
   int mat[r][c];
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           cin>>mat[i][j];
       }
   }
   int cou=0;
 for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           cout<< mat[i][j]<< "  ";
           if(mat[i][j] !=0)
            cou++;
       }
       cout<<endl;
   }
   cout<<endl<<endl;
   int mat2[cou][3];
   int k=0;
   for(int i=0; i<r; i++)
   {
       for(int j=0; j<c; j++)
       {
           if(mat[i][j] !=0)
           {
               mat2[k][0]=i;
               mat2[k][1]=j;
               mat2[k][2]=mat[i][j];
               k++;
           }
       }
   }
   for(int i=0; i<cou; i++)
   {
       for(int j=0; j<3; j++)
       {
           cout<< mat2[i][j]<< "   ";
       }
       cout<<endl;
   }
}
