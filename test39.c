#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float ganhador1, ganhador2, ganhador3, imp=780000;
	ganhador1 = imp * 46/100;
	ganhador2 = imp * 32/100;
	ganhador3 = imp -(ganhador1 + ganhador2);
	printf("ganhador 1: %.2f\n", ganhador1);
	printf("ganahdor 2: %.2f\n", ganhador2);
	printf("ganahdor 3: %.2f\n", ganhador3);
	system("pause");
	
}
