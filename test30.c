#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{	
 
    setlocale(LC_ALL,"");
    
	float b = 5.06, a ;
	printf("Valor em real:");	
	scanf("%f", &a);
	printf("Cotação em dolar = 5.06\n");	
	printf("Valor em dolar: %f\n", a*b);
	system("pause");
		
}
