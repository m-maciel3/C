#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int n1, n2, diferenca;
	printf("Digite n�mero: ");
	scanf("%d", &n1);
	printf("Digite n�mero: ");
	scanf("%d", &n2);
	if (n1 > n2)
	{
		diferenca = n1 - n2;
		printf("O maior n�mero �: %d\n", n1);
		printf("A diferen�a dos n�meros %d e %d  �: %d\n", n1, n2, diferenca);	
	}
	else if(n2 > n1)
	{
		diferenca = n1 - n2;
		printf("O maior n�mero �: %d\n", n2);
		printf("A diferen�a dos n�meros %d e %d �: %d\n", n2, n1, diferenca);
	}
	else 
	{
		printf("N�meros iguais\n");
	}
	system("pause");
	
}
