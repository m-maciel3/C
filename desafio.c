//Utilizando estrutura de repeti��o elabore um sistema que leia uma vota��o na disputa pela lideran�a entre Lula e
//Bolso. No final da vota��o o sistema dever� imprimir o total de votos dos candidados e os totais de votos brancos e nulos.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"");
	
	int opcao, lula=0, bolsonaro=0, branco=0, nulo=0, sair=1;
	while (sair !=0){
	
	printf("Escolha candidato:");
	printf("\n1-Lula\n2-Bolsonaro\n3-Voto em Branco\n4-Voto nulo\n");
	scanf("%d", &opcao);
	switch(opcao){
		
	case 1:
	lula++;
	break;
			
	case 2:
	bolsonaro++;
	break;
	
	case 3:
	branco++;
	break;
	
	case 4:
	nulo++;
	break;
	
    default:
	printf("N�mero inv�ldo\n");}
	
    printf("Quantidade de votos para Lula %d\n", lula);
	printf("Quantidade de votos para Bolsonaro %d\n", bolsonaro);
	printf("Quantidade de votos em branco %d\n", branco);
	printf("Quantidade de votos nulos %d\n", nulo);
	{
	printf("\n1 para continuar ou 0 para sair.");
	scanf("%d", &sair);
	}
	{
	system("pause");
	}	
  
 } 
}
		 	 

	

	


