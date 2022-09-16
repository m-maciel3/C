#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int n1, n2, diferenca;
	printf("Digite número: ");
	scanf("%d", &n1);
	printf("Digite número: ");
	scanf("%d", &n2);
	if (n1 > n2)
	{
		diferenca = n1 - n2;
		printf("O maior número é: %d\n", n1);
		printf("A diferença dos números %d e %d  é: %d\n", n1, n2, diferenca);	
	}
	else if(n2 > n1)
	{
		diferenca = n1 - n2;
		printf("O maior número é: %d\n", n2);
		printf("A diferença dos números %d e %d é: %d\n", n2, n1, diferenca);
	}
	else 
	{
		printf("Números iguais\n");
	}
	system("pause");
	
}
