#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float n, quinta;
	printf("n�mero:");
	scanf("%f",&n);
	quinta=n/5;
	printf("A quinta parte do n�mero %.1f �: %.1f\n", n, quinta);
	system("pause"); 
}
