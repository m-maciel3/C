#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "");
	
	int a;
	printf("Digite um n�mero:");
	scanf("%d", &a);
	if (a %2 == 0)
	{	
		printf("o n�mero %d � par: \n", a);
	}
	else 
	{
		printf("o n�mero %d � impar\n", a);
	}
	system("pause");
}
