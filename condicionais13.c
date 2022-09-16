#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float prova1, prova2, prova3, media;
	int peso1 = 1, peso2 = 1, peso3 = 2;
	printf("------------MÉDIA-------------\n");
	printf("Informe primeira nota: ");
	scanf("%f", &prova1);
	printf("Informe segunda nota: ");
	scanf("%f", &prova2);
	printf("Informe terceira nota: ");
	scanf("%f", &prova3);
	media = ((prova1 * peso1) + (prova2 * peso2) + (prova3 * peso3)) / (peso1+peso2+peso3);
	printf("A média do aluno é: %.1f\n", media);
	if (media>=7)
	{
		printf("Aluno aprovado.\n");
	}
	else
	{
		printf("Aluno reprovado.\n");
	}
	system("pause");
}
