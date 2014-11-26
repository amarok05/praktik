#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
char str[256];
cin>>str;
        char *temp = "abcd";
        short j = 0;
            for(int i = 0; i<=strlen(str);i++)
                if(str[i] == temp[j])
                {
                    str[i] = ' ';
                    j++;
                    if(j == strlen(temp))j = 0;
                }
                  cout<<str;
                  getch ();
                  return 0;
                  }          


