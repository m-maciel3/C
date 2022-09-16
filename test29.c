#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int a, b, c, d, soma;
	printf("Digite primeiro número:");
	scanf("%d", &a);
	printf("Digite secundo número:");
	scanf("%d", &b);
	printf("Digite terceiro número:");
	scanf("%d", &c);
	printf("Digite quarto número:");
	scanf("%d", &d);
	
	soma=a+b+c+d/4;
	
	printf("A média é: %d\n", soma);
	system("pause");
}
