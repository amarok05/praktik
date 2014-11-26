#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float formula ()
{
float x, y;
cout<<"______________________\nx\t|y\t\n______________________\n";
for(x=-4;x<=4;x=x+0.8)
{
y=sin(x)/(1-(x-3));
cout<<x<<"\t|"<<y<<"\n";
}
}
int main(void)
{
formula();
getch();
return 0;
}
