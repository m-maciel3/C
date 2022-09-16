#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float n1, n2, media;
	printf("Digite número: ");
	scanf("%f", &n1);
	printf("Digite número: ");
	scanf("%f", &n2);
	
	if(n1 >=0 && n1 <=10)
	{
		if(n2 >=0 && n2 <=10)		
	{
		media=(n1+n2)/2;
		printf("A média é: %f\n", media);
	}

	else
	{
		printf("Nota 2 é inválido\n");
	}	
	}
	else 
	{
		printf("Nota 1 é inválida\n");
	}

	system("pause");
}
