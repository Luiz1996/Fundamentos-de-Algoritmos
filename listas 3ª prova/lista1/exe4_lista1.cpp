/*Usando o algoritmo de ordenação por seleção, codifique duas funções para ordenar uma tabela
cujos registros contêm nomes de alunos e respectivos RAs. Uma função deve ordenar os registros utilizando o
nome como chave e a outra utilizando o RA.*/
#include <stdio.h>
#include <string.h>

#define TAM 5

typedef struct{
	char nome[50];
	int ra;
} CADASTRO;

void imprime(CADASTRO *aluno){
	for(int i = 0; i < TAM; i++){
		printf("RA: %d | Nome: %s\n", aluno[i].ra, aluno[i].nome);
	}
	
	for(int i = 0; i < 120; i++) printf("-");
}

void ordena_RA_BUBBLESORT(CADASTRO *aluno){
	printf("ORDENACAO POR 'RA'\n\n");
	CADASTRO auxiliar;
	for(int k = 1; k < TAM; k++){
		for(int i = 0; i < (TAM - k); i++){
			if(aluno[i].ra > aluno[i+1].ra){
				auxiliar = aluno[i];
				aluno[i] = aluno[i + 1];
				aluno[i + 1] = auxiliar;
			}
		}
	}
	imprime(aluno);
}

void ordena_Nome_BUBBLESORT(CADASTRO *aluno){
	printf("ORDENACAO POR 'NOME'\n\n");
	CADASTRO auxiliar;
	for(int k = 1; k < TAM; k++){
		for(int i = 0; i < (TAM - k); i++){
			if(strcmp(aluno[i].nome, aluno[i+1].nome) > 0){
				auxiliar = aluno[i];
				aluno[i] = aluno[i + 1];
				aluno[i + 1] = auxiliar;
			}
		}
	}
	imprime(aluno);
}

int main(void){
	CADASTRO aluno[TAM] = {{"Ze Mane", 15700},{"Paulo", 15973}, {"Ciclano", 10000}, {"Fulano", 74103}, {"Joao", 85209}};
	
	
	ordena_RA_BUBBLESORT(aluno);
	ordena_Nome_BUBBLESORT(aluno);
}
