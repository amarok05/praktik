#include <stdio.h>
#include <conio.h>

#define N 6

int main(void)
{
struct students 
{
char* surname;
int year;
int month;
int day;
};
students st[N];
st[0].surname = "BoBk";	st[0].year = 1991;	st[0].month = 12;	st[0].day = 12;
st[1].surname = "Bucenko";	st[1].year = 1990;	st[1].month = 9;	st[1].day = 2;
st[2].surname = "Busha";	st[2].year = 1991;	st[2].month = 1;	st[2].day = 17;
st[3].surname = "Sahnovskiy";	st[3].year = 1992;	st[3].month = 11;	st[3].day = 16;
st[4].surname = "Bulazhenko";		st[4].year = 1992;	st[4].month = 7;	st[4].day = 29;
st[5].surname = "Woloshin";	st[5].year = 1991;	st[5].month = 4;	st[5].day = 25;
for (int i = 0; i < N; i++) 
{
if (st[i].surname[0] == 'B')
printf("%3d.\t%15s (%2d.%2d.%4d)\n", i+1, st[i].surname, st[i].day, st[i].month, st[i].year);
}
getch();
return 0;
}

