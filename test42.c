#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float salario, gat, imp;
	printf("Informe o salario:");
	scanf("%f", &salario);
	gat = (salario*5/100);
	imp = (salario*7/100);
	salario = salario + gat - imp;
	printf("%f\n", salario);
	system("pause");
}
