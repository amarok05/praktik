#include <conio.h>
#include <iostream>
#include <string.h>
 
 using namespace std;
 
int main()
 {
 int n;
 cout<<"Vvedit kilkist simvolov"<<endl;
 cin>>n;
 char * s=new char[n];
 cout<<"Vvedite simvoly"<<endl;
 cin.get();
 fgets(s,n,stdin);
 for (int i=0; i<n; i++)
 {
    if ((s[i] >= 97)&&(s[i] <= 100))
     {
     }
    else cout<<s[i]<<endl;
}
    getch ();
    return 0;
}

