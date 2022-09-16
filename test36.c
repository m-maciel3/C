#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float altura, raio, volume;
	printf("Digite raio:");
	scanf("%f", &raio);
	printf("Digite altura:");
	scanf("%f", &altura);
	volume=3.14*pow(raio,2)*altura;
	printf("O volume é: %.1f\n", volume);
	system ("pause");
	
	
	
}
