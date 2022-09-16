#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int a, b;
	float hip;
	scanf("%d", &a);
	scanf("%d", &b);
	hip = sqrt(pow(a,2)+pow(b,2));
	printf("hip: %.2f", hip);
	system ("pause");
	}
