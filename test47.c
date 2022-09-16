#include <stdio.h>
#include <stdlib.h>

int main()
{
	int segundos, horas, minutos;
	printf("segundos:");
	scanf("%d", &segundos);
	horas=segundos/3600;
	minutos=(segundos-(horas*3600));
	segundos=segundos-(horas*3600)-(minutos*60);
	printf("equivale a %d horas(s), %d minutos e %d segundos\n", horas, minutos, segundos);
	system("pause");
}
