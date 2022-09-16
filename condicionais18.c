#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int n1, n2;
	char funcao;
	
	printf("\n=========ESCOLHA UMA FUNÇÃO MATEMÁTICA==========\n");
	printf("\n[S]para SOMA            [T]para SUBTRAÇÃO\n");
	printf("\n[D]para DIVISÃO         [M]para MULTIPLICAÇÃO\n");
	scanf("%c", &funcao);
	printf("Digite 1º valor: ");
	scanf("%d", &n1);
	printf("Digite 2º valor: ");
	scanf("%d", &n2);
	printf("Opção escolhida %c\n", funcao);
	switch (funcao){
		
	case 'S':
	printf("Soma entre %d e %d: %d\n", n1, n2, n1+n2);
	break;
	
	case 'T':
	printf("Subtração entre %d e %d: %d\n", n1, n2, n1-n2);
	break;
	
	case 'D':
	printf("Divisão entre %d e %d: %d\n", n1, n2, n1/n2);
	break;
	
	case 'M':
	printf("Multiplicação entre %d e %d: %d\n", n1, n2, n1*n2);
	break;
	
	default:
	printf("Opção Inválida.\n");
	break;
	}
	system("pause");
}						

