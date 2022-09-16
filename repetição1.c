#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int opcao, i, sair=1;
	
	while(sair!=0){
	
	
	printf("Escolha a opcao\n");
	printf("1 - FOR\n2 - WHILE\n3 - Do WHILE\n >>>>");
	scanf("%d", &opcao);
	switch (opcao){
		case 1:
		printf("Usando o FOR\n");
		for (i=2;i<=500;i=i+2){
		printf("%d ", i);
		}
		break;
		case 2:
		printf("Usando o WHILE\n");
		i=2;
		while(i<=500){
			printf("%d ", i);
			i=i+2;
		}
		break;
		case 3: 
		printf("Usando o DO WHILE\n");
		i=2;
		do{
			printf("%d ", i);
			i=i+2;
		}while(i<=500);
		break;
		
		default:
		printf("Opcao invalida 1");		
	}
	printf("\n\n1 para continuar ou 0 para sair: >>>>");
	scanf("%d", &sair);	
	}
	printf("\n");
	system ("pause");
}
