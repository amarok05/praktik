#include <stdio.h>
#include <conio.h>
#define N 4

int main(void)
{
	
double A[N][N], B[N][N], C[N][N], D[N][N];
for (int i = 0; i < N; i++)
for (int j = 0; j < N; j++)
{
A[i][j] = i + j + 1;
B[i][j] = i + j - 1;
C[i][j] = i*j - 1;
}
for (int i = 0; i < N; i++)
for (int j = 0; j < N; j++)
A[i][j] += B[i][j];
for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
D[i][j] = 0;
for (int k = 0; k < N; k++)
D[i][j] += A[i][k] * C[k][i];
printf("%lf\t", D[i][j]);
}
printf("\n");
}
getch();
return 0;
}

