#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float valor, total, desconto, totalDesconto, sair=1;
	while(sair !=0){
	
	printf("valor do produto: ");
	scanf("%f", &valor);
	
	printf("digite 1 para adicionar mais produtos ou 0 para sair\n");
	scanf("%f", &sair);
	}	
	total=valor+valor;
	printf("total: %.2f\n ", total);
	
	if(total >= 200)
	{
	desconto=total * 20/100;
	printf("O valor do desconto: %.2f\n", desconto);
	
	totalDesconto=total-desconto;
	printf("O valor final com desconto: %.2f\n", totalDesconto);
	}
	else
	{
		printf("\n");
	}
	
	system ("pause");
		

}
