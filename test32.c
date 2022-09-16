#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a, b, c, soma;
	printf("Digite numero:");
	scanf("%d", &a);
	b = (a * 3) +1;
	c = (a * 2) -1;
	soma = b + c;
	printf("A soma do seu triplo e dobro: %d\n", soma);
	system("pause");
	
}
