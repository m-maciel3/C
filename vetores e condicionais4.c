// � necess�rio guardas as temperaturas de cada m�s do ano e informar qual o m�s mais quente com sua temperatura e qual o m�s mais frio com sua temperatura. Efetue esta solu��o utilizando vetores e condicionais.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	float temp[12], tempMaior=-9999, tempMenor=9999;
	int i, j=0, maior=0, menor=0;
	for(i=0;i<=11;i++){
		j++;
	    printf("M�s %d-Temperatura: ", j);
	    scanf("%f", &temp[i]);
	    if(tempMaior<temp[i]){
	    	tempMaior=temp[i];
	    	maior = i+1;
		}
		if(tempMenor>temp[i]){
			tempMenor=temp[i];
			menor = i+1;
		}
	}
	{
	printf("A maior temperatura � do m�s %d: %.1f\n", maior, tempMaior);
	printf("A menor temperatura � do m�s %d: %.1f\n", menor, tempMenor);
	}	
}
