#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int n1, n2;
	char funcao;
	
	printf("\n=========ESCOLHA UMA FUN��O MATEM�TICA==========\n");
	printf("\n[S]para SOMA            [T]para SUBTRA��O\n");
	printf("\n[D]para DIVIS�O         [M]para MULTIPLICA��O\n");
	scanf("%c", &funcao);
	printf("Digite 1� valor: ");
	scanf("%d", &n1);
	printf("Digite 2� valor: ");
	scanf("%d", &n2);
	printf("Op��o escolhida %c\n", funcao);
	switch (funcao){
		
	case 'S':
	printf("Soma entre %d e %d: %d\n", n1, n2, n1+n2);
	break;
	
	case 'T':
	printf("Subtra��o entre %d e %d: %d\n", n1, n2, n1-n2);
	break;
	
	case 'D':
	printf("Divis�o entre %d e %d: %d\n", n1, n2, n1/n2);
	break;
	
	case 'M':
	printf("Multiplica��o entre %d e %d: %d\n", n1, n2, n1*n2);
	break;
	
	default:
	printf("Op��o Inv�lida.\n");
	break;
	}
	system("pause");
}						

