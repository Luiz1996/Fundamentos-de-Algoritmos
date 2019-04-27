#include <stdio.h>
#define QTDE_ALUNOS 2

typedef struct{
	char nome[50];
   	int  ra;
   	float n1;
   	float n2;
   	float n3;
} ALUNOS;

int main(void){
	ALUNOS alunos[QTDE_ALUNOS];
	
	for(int i = 0; i < QTDE_ALUNOS; i++){
		printf("Nome..: ");
		scanf("%[^\n]s", alunos[i].nome);
		printf("RA....: ");
		scanf("%d", &alunos[i].ra);
		printf("Nota 1: ");
		scanf("%f", &alunos[i].n1);
		printf("Nota 2: ");
		scanf("%f", &alunos[i].n2);
		printf("Nota 3: ");
		scanf("%f", &alunos[i].n3);
		fflush(stdin);
		printf("------------------------------------------------------------------------------------------------------------------------");
	}
	
	printf("------------------------------------------------------ RESULTADO -------------------------------------------------------");
	for(int i = 0; i < QTDE_ALUNOS; i++){
		printf("Matricula: %d | Nome: %s | Media: %.2f\n", alunos[i].ra, alunos[i].nome, (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3);
	}
}
