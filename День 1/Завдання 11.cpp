# include <iostream>
# include <conio.h>
# include <string.h>
# include <stdio.h>

using namespace std;


int main ()
{
char strl [500];
cout<<"vvedit slovo : ";
gets (strl);
char *str=new char[strlen(strl)];
str=strl;

for (int i=0;i<strlen(strl);i++)
{
	if((str[i]>=-96)&&(str[i]<=-81)||(str[i]>=-32)&&(str[i]<=-17)||(str[i]>=-128)&&(str[i]<=-97))
	cout<<str[i];
}
getch();
return 0;    
}

