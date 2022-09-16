#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,""); 
	
	int i; 
	for (i=0;i<=100;i++)
	{
		printf("%d ", i);
	}
	system ("pause");
}
