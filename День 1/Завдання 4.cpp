#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
   char str[256];
   cin>>str;
   int n=strlen(str), a=0;
   
   for(int i=0; i<n; i++){
           if(str[i]>='0' && str[i]<='9') a++;}
   
   
   cout<<"symbols="<<n<<endl<<"cifr="<<a<<endl;
   system("pause"); 
   return 0;
}

