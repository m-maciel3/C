#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float n, quadrado;
	printf("Digite n�mero:");
	scanf("%f", &n);
	quadrado=pow(n,2);
	printf("o valor de %.1f ao quadrado �: %.1f\n", n, quadrado);
	system("pause");
	
}
