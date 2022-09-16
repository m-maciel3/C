#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	int i=0;
	do
	{
		i++;
		printf("%d ", i);
	}while(i<=100);
	system ("pause");
}
