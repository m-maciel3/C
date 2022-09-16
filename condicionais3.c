#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float a, raiz, quadrado;
	printf("Digite numero: ");
	scanf("%f", &a);
	if (a >= 0)
	{
		raiz = sqrt (a);
		printf("a raiz do numero %.2f: %.2f\n", a, raiz);
	}
	else 
	{
		quadrado = pow(a,2);
		printf("O quadrado do numero %.2f: %.2f\n", a, quadrado);
	}
	system("pause");
}
