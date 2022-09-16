#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"");
	float notaTrabLaboratorio, notaAvalSemestral, notaExameFinal, mediaGeral, pesoTrabLaboratorio=2, pesoAvalSemestral=3, pesoExameFinal=5;
	printf("Informe nota do trabalho do laboratório: ");
	scanf("%f", &notaTrabLaboratorio);
	
    if(notaTrabLaboratorio>=0 && notaTrabLaboratorio<=10)
    {  
	printf("Informe nota avaliação semestral: ");
	scanf("%f", &notaAvalSemestral);
	
	if(notaAvalSemestral>=0 && notaAvalSemestral<=10)
    {
	 printf("Informe nota exame final: ");
		scanf("%f", &notaExameFinal);
		
		if(notaExameFinal>=0 && notaExameFinal<=10)
		{
			mediaGeral=((notaTrabLaboratorio*pesoTrabLaboratorio)+(notaAvalSemestral*pesoAvalSemestral)+(notaExameFinal*pesoExameFinal))/(pesoAvalSemestral+pesoExameFinal+pesoTrabLaboratorio);
			
			if(mediaGeral>=0 && mediaGeral<=2.9)
			{
				printf("Média: %.1f\n", mediaGeral);
				printf("Aluno Reprovado.\n");
				}			
			else if(mediaGeral>=3 && mediaGeral<=4.9)
			{
				printf("Média: %.1f\n", mediaGeral);
				printf("Aluno em Recuperação.\n");
			}
				
			else
			{
			printf("Média: %.1f\n", mediaGeral);
			printf("Aluno Aprovado.\n");	
			}
			
			else
			{
			printf("Nota do Exame Final Inválida.\n");
			}
			
			else
			{
			printf("Nota da Avaliação Final inválida.\n");	
			}
			
			else
			{
			("Nota do laboratório inválida.\n");
			}
			
			{
			system("pause");
			}
		      
		   }
		}	
	}
}
		




