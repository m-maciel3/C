#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float n, quadrado;
	printf("Digite número:");
	scanf("%f", &n);
	quadrado=pow(n,2);
	printf("o valor de %.1f ao quadrado é: %.1f\n", n, quadrado);
	system("pause");
	
}
