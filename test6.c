#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL,"");
	float f,c;
	printf("Temperatura em celsius:");
	scanf("%f", &c);
	f=c*(9.0/5.0)+32.0;
	printf("Temperatura em fahrenheit: %f.1\n", f, c);
	system("pause");
	
}
