#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;
const int n=10;
struct Kniga
{
    string familiya;
    int nomer;
    void Vivod();
    void Vvod();
    void Proverka(int n);
};
void Kniga::Vvod()
{
 cout<<"Vvedite familiu: ";
 cin>>familiya;
 cout<<"Vvedite telefon: ";
 cin>>nomer;
}
void Kniga::Vivod()
{
cout<<"Familiya: "<<familiya<<setw(6)<<"Nomer: "<<nomer<<endl;
}
void Kniga::Proverka(int n)
{
if(nomer==n) cout<<familiya<<endl;
}

int main()
{
    Kniga* obj=new Kniga[n];
    cout<<"Zapolnite bazu: "<<endl;
    for(int i=0;i<5;i++)
        
    obj[i].Vvod();
    cout<<"Baza: "<<endl;
    for(int i=0;i<5;i++)
    obj[i].Vivod();
    int nomer;
    cout<<"VVedite nomer: ";
    cin>>nomer;
    for(int i=0;i<5;i++)
    obj[i].Proverka(nomer);
       getch();
       return 0;
}

