#include <stdio.h>
#include <conio.h>
#include <math.h>

#define MAX(a, b) (((a)>(b)) ? (a) : (b))
double h(double a, double b)
{
return a / (1 + b*b) + b / (1 + a*a) - pow(a - b, 3);
}
int main(void)
{
double s=0, t=-1.0;
double res = h(s, t) + MAX(pow(h(s - t, s*t), 2), pow(h(s - t, s + t), 4)) + h(1, 1);
printf("Result = %lf", res);
getch();
return 0;
}

