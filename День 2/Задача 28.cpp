#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <conio.h>

using namespace std;

int main(void)
{
	ifstream f;
	char* name = "numbers.txt";
	f.open(name);
	string text;
	int i = 0, j = 0, s=0, n = 5, k=3, l=4;
	int *a, *b, sum = 0;
	a = new int[n];
	b = new int[n];
bool find;
	while (f >> text)
{
	if (i / n == k-1) 
	a[j++] = atoi(text.c_str());
	if (i / n == l-1) 
	b[s++] = atoi(text.c_str());
	i++;
}
for (i = 0; i < n; i++)
sum += a[i] * b[i];

cout << "Skalyarnoe proizvedenie " << sum << endl;
getch();
return 0;
}


