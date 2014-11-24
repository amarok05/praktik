#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
 
double length (double p1[2], double p2[2]);
int main ()
{
    int i;
    double A[2], B[2], C[2], a, b, c, P;
    
    cout <<"Vvedit koopdunatu tochku  A"<<endl;
    
    for (i = 0; i < 2; i++)
        cin >> A[i];
        
    cout <<"Vvedit koopdunatu tochku  B"<<endl;
    
    for (i = 0; i < 2; i++)
        cin >> B[i];
        
    cout <<"Vvedit koopdunatu tochku  C"<<endl;
    for (i = 0; i < 2; i++)
    
        cin >> C[i];
    for (i = 0; i < 2; i++)

    a = length( C, B );
    b = length( C, A );
    c = length( B, A );
    P = a + b + c;
    cout <<"a is "<< a<<" b is "<< b << " c is "<< c<< endl;
    cout <<"Perimeter trukytnuka = "<< P <<endl;
    getch ();
    return 0;
}
double length(double p1[2], double p2[2])
{
 double length, s1, s2;
 s1 = p1[0] - p2[0];
 s2 = p1[1] - p2[1];
 length = sqrt(pow(s1,2) + pow(s2,2));
 return length;
}
