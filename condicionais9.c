#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float salario, valorPrestacao;
	printf("informe sal�rio: ");
	scanf("%f", &salario);
	printf("Parcela limite: R$ %.2f\n", salario * 20 / 100);
	printf("Valor da preta��o: ");
	scanf("%f", &valorPrestacao);
	if (valorPrestacao > (salario * 20 / 100))
	{
		printf("Empr�stimo n�o concedido\n");
	}
	else 
	{
		printf("Empr�stimo concedido\n");
	}
	system("pause");
	
	 }
