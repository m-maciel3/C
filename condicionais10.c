#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float altura, pesoIdeal;
	char sexo;
	printf("Informe sexo [M] masculino ou [F] feminino: ");
	scanf("%c", &sexo);
	printf("Informe sua altura ");
	scanf("%f", &altura);
	
	if (sexo == 'm' || sexo == 'M')
	{
		pesoIdeal = 72.7 * altura - 58;
		printf("Seu peso ideal é: %.2f\n", pesoIdeal);
	}
	else if (sexo == 'f' || sexo == 'F')
	{
		pesoIdeal = 72.7 * altura - 58;
		printf("Seu peso ideal é: %.2f\n", pesoIdeal);
	}
	else 
	{
		printf("Sexo inválido.");
	}
	system("pause");
	
	
}
