#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int dia;
	printf("Digite valor: ");
	scanf("%d", &dia);
	switch (dia){
	case 1:
	printf("Domingo\n");
	break;
	
	case 2:
	printf("Segunda-Feira\n");
	break;
	
	case 3:
	printf("Terça-Feira\n");
	break;
	
	case 4:
	printf("Quarta-Feira\n");
	break;
	
	case 5:
	printf("Quinta-Feira\n");
	break;
	
	case 6:
	printf("Sexta-Feira\n");
	break;
	
	default:
	printf("Dia Inválido.\n");
	}
	{
		system("pause");
	}
}
