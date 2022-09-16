#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float salario, valorPrestacao;
	printf("informe salário: ");
	scanf("%f", &salario);
	printf("Parcela limite: R$ %.2f\n", salario * 20 / 100);
	printf("Valor da pretação: ");
	scanf("%f", &valorPrestacao);
	if (valorPrestacao > (salario * 20 / 100))
	{
		printf("Empréstimo não concedido\n");
	}
	else 
	{
		printf("Empréstimo concedido\n");
	}
	system("pause");
	
	 }
