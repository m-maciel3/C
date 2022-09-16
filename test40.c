#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int dia;
	float pag;
	scanf("%d", &dia);
	pag = dia * 30,0;
	pag = pag - (pag * 8/100);
	printf("R$:%.2f\n", pag);
	system("pause");
}
