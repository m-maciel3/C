#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float vh, hm, salario;
	scanf("%f", &vh);
	scanf("%f", &hm);
	salario = vh * hm;
	salario = salario +(salario * 10/100);
	printf("%f", salario);
	system("pause");
}
