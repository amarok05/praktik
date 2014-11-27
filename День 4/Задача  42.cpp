#include <stdio.h>
#include <conio.h>

long A(long n, long m) {
if (n == 0) 
return m + 1;
else {
if (m > 0) 
return A(n - 1, A(n, m - 1));
else 
return A(n - 1, 1);
}
}

int main(void) 
{
int i = 2, j = 80;
printf("n = %d, m = %d, A(n,m) = %ld\n", i, j, A(i,j));
getch();
return 0;
}


