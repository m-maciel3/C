#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float n, quinta;
	printf("número:");
	scanf("%f",&n);
	quinta=n/5;
	printf("A quinta parte do número %.1f é: %.1f\n", n, quinta);
	system("pause"); 
}
