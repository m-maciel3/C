#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int a, raiz, quadrado;
	printf("Digite um numero: ");
	scanf("%d", &a);
	if (a >= 0)
	{
		raiz = sqrt (a);
		printf("A raiz do numero %d: %d\n", a, raiz);
		quadrado = pow(a,2);
		printf("O quadrado do numero %d: %d\n", a, quadrado);
	}
	system("pause");
	
}
