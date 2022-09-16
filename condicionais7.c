#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int n1, n2;
	printf("Digite número: ");
	scanf("%d", &n1);
	printf("Digite número: ");
	scanf("%d", &n2);
	if (n1 > n2)
	{
		printf("O maior número é: %d\n", n1);
	}
	
	else if (n2 > n1)
	{
	printf("O maior número é: %d\n", n2);	
	}
	
	else 
	{
		printf("Números iguais\n");
	}
	system("pause");
}

