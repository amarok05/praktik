#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
float ololosha (float a,float b)
{
  float u, v,w,min=0,c,p,k; 
  c = a-b; p = a+b;   
 if(a<b)
 u=a;
 else
 u = b;
 if(c<p)
 v=c;
 else
 v = p;
 k = u+pow(v,2);
 if(k < M_PI)
 w = k;
 else
 w = 3.14;
  cout<<" "<<u<<" "<<v<<" "<<w<<endl; 
}

int main ()
{
   float a, b;
    cin>>a>>b;
    ololosha(a,b);
getch();
return 0;
}

