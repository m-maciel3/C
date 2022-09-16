#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL,"");
	float r, area;
	printf("Valor do raio:");
	scanf("%f", &r);
	area=3.14*pow(r,2);
	printf("Aréa do círculo:%.1f\n", area);
	system("pause");
}
