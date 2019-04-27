#include <stdio.h>
#include <math.h>
#include <string.h>

#define QTDE_PESSOAS 1

typedef struct{
	char nome[50];
	float altura;
	float peso;	
	char cpf[15];
	char sexo[1];
} PESSOAS;

int main(void){
	PESSOAS pessoas[QTDE_PESSOAS];
	
	for(int i = 0; i < QTDE_PESSOAS; i++){
		printf("Nome..: ");
		scanf("%[^\n]s", pessoas[i].nome);
		printf("Altura: ");
		scanf("%f", &pessoas[i].altura);
		printf("Peso..: ");
		scanf("%f", &pessoas[i].peso);
		fflush(stdin);
		printf("CPF...: ");
		scanf("%[^\n]s", pessoas[i].cpf);
		fflush(stdin);
		printf("Sexo..: ");
		scanf("%s", pessoas[i].sexo);
		fflush(stdin);
		for(int i = 0; i < 120; i++) 
			printf("-");
	}
	
	
	while(1){
		char cpf[15];
		printf("Insira o CPF a ser buscado: ");
		fflush(stdin);
		scanf("%s", cpf);
		
		for(int i = 0; i < QTDE_PESSOAS; i++){
			if(strcmp(cpf, pessoas[i].cpf) == 0){
				printf("\nNome: %s | IMC: %.2f\n", pessoas[i].nome, pessoas[i].peso / (pow(pessoas[i].altura, 2)));
				for(int i = 0; i < 120; i++) 
					printf("-");
			}
		}
	}
}
