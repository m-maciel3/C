#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int opcao, i, sair=1;
	
	while(sair !=0){
		printf("\nEscolha opção:\n");
		printf("1-FOR\n2-WHILE\n3-DO WHILE\n>>>>>");
		scanf("%d", &opcao);
		switch (opcao){
			case 1:
				printf("Usando o FOR\n");
				for(i=500;i>=5;i--){
					printf("%d ", i);
				}
			break;
				
				case 2:
				printf("Usando o WHILE\n");
				i=500;
				while(i>=5){
					printf("%d ", i);
					i--;
				}
				break;
				
				case 3:
					printf("Usando DO WHILE\n");
					i=500;
					do{
						printf("%d ", i);
						i--;
					}while(i>=5);
					break;
					
					default:
						printf("Opção Inválida 1");
						
						{
							printf("\n\n1para continuar ou 0 para sair:>>>>>");
							scanf("%d", &sair);
						}
						system("pause");
		}
	}
}
