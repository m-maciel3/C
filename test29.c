#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int a, b, c, d, soma;
	printf("Digite primeiro n�mero:");
	scanf("%d", &a);
	printf("Digite secundo n�mero:");
	scanf("%d", &b);
	printf("Digite terceiro n�mero:");
	scanf("%d", &c);
	printf("Digite quarto n�mero:");
	scanf("%d", &d);
	
	soma=a+b+c+d/4;
	
	printf("A m�dia �: %d\n", soma);
	system("pause");
}
