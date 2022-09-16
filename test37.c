#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float a, desconto;
	printf("Valor do produtor:");
	scanf("%f", &a);
	desconto=a*12/100;
	printf("O valor do desconto de 12 é: %.3f\n", a-desconto);
	system("pause");
}
