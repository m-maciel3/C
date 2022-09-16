#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int A[5], B[5], C[5], i;
	for(i=0;i<=4;i++);
	{
		printf("Informe %dº valor para Vetor A:", i+1);
		scanf("%d", &A[i]);
		printf("Informe %dº valor para Vetor B:", i+1);
		scanf("%d", &B[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("%d + %d = %d\t\t", A[i], B[i], C[i]);
	}
	system("pause");
}
