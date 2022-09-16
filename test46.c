#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int num, a, b, c;
	printf("Digite numero:");
	scanf("%d", &num);
	if(num >=100 && num <=999)
	{
		a = trunc(num / 100);
		b = (num - (a * 100)) /10;
		c = (num - (a * 100)) - (b * 10);
		printf("%d\n", num);
		printf("%d%d%d\n", a, b, c);
		}else{
			printf("Numero invalido\n");
			system ("pause");
		}
	
	
	
}
