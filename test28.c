#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	float a, b, c, quadrado ;
	printf("numero1:");
	scanf("%f", &a);
	printf("numero2:");
	scanf("%f", &b);
	printf("numero3:");
	scanf("%f", &c);
	
	quadrado=pow(a,2)+pow(b,2)+pow(c,2);
	
	printf("o valor da soma é: %.f\n", quadrado);
	system("pause");
}
