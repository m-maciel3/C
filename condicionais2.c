#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int a, b;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if (a >= 0)
	{
		b = sqrt(a);
		printf("A raiz do numero %d e: %d\n", a, b);
	}
	else
	{
		printf("Numero invalido\n");
	}
	system("pause");
}

