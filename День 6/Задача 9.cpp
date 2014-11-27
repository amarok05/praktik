#include <string>
#include <iostream>
#include <fstream>
using namespace std;
 
int get_w(string s)
{
int repeat;
int min_length = 2000000000;
for(int i=0; i < s.length(); i++)
if(s[i] != ' ')
{
int start = i;
while(i != s.size() && s[i] != ' ')
i++;
if(i-start == min_length)
repeat++;
if(i-start < min_length)
{
repeat = 1;
min_length = i-start;
string str = s.substr(start, i-start);
}
}
return repeat;
}
 
int main()
{
    ofstream fout (" file1.txt");
    cout<<"Vvedit  text :"<<endl;
    string str;
    getline(cin, str);
    fout<<str<<endl;
    fout << get_w(str) << endl;
    fout.close();
    system("pause");
    return 0;
}



