#include <iostream>
#include <conio.h>
#define m 20
#define n 20
using namespace std;
int main()
{
  int K[m][n];
  cout<<"Matriza"<<endl;
  for(int i=0, olo=0; i<m/2; ++i, ++olo)
{
  for (int j=i;j<(n-i);++j)
{
        K[i][j]=olo;
        K[m-i-1][j]=olo;
        K[j][i]=olo;
        K[j][n-i-1]=olo;
        }
        }
 for (int i=0;i<m;++i)
 {
        for(int j=0;j<n;++j)
        cout<<K[i][j]<<"  ";
        cout<<endl;
        }
        getch();
        return 0;
 }

