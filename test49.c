#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	
	int hora, min, ss, totalSegundos=7200;
	hora = totalSegundos/3600;
	min = (totalSegundos - (hora*3600));
	ss = totalSegundos - (hora*3600) - (min*60);
	printf("%d equivalhe a %d horas(s), %d minutos e %d segundos\n", totalSegundos, hora, min, ss);
	system("pause");
	return (0);
}
