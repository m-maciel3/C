#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int lado;
	scanf("%d", &lado);
	lado = lado * lado;
	printf("A aréa do quadrado é: %d", lado);
}
