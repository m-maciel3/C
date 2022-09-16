#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int a, b;
	printf("Primeiro valor:");
	scanf("%d", &a);
	printf("Segundo valor:");
	scanf("%d", &b);
	
	if (a>b)
	{
	 printf("O maior valor é %d:",a);
	}			
	else
	{	
	 printf("O maior valor é %d\n:",b);
	}
			
	system("pause");
}


printf("digite 1 para adicionar mais produtos ou 0 para sair\n");
		scanf("%f", &sair);



while(sair !=0){
