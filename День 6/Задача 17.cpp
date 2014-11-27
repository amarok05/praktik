#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main(void)
{
ifstream in;
char filename[] = "lol.txt";
int array[18], n=0;
in.open(filename);
while (in)
{
int c;
in >> c;
if (c > 0) {
array[n] = c;
cout << array[n] << "\t";
n++;
}
}
in.close();
getch();
return 0;
}

