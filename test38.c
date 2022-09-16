#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float a, salario;
	printf("Digite o salário:");
	scanf("%f", &a);
	salario=a*25/100;
	printf("O novo salário é: %.3f\n", a+salario);
	system ("pause");
}
