#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "");
	
	int a;
	printf("Digite um número:");
	scanf("%d", &a);
	if (a %2 == 0)
	{	
		printf("o número %d é par: \n", a);
	}
	else 
	{
		printf("o número %d é impar\n", a);
	}
	system("pause");
}
