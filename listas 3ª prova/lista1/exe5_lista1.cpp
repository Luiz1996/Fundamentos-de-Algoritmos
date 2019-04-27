/*Baseado no tipo de dados definido no exerc�cio anterior, crie uma fun��o que receba por
par�metro um RA e o arranjo de alunos, e ent�o devolva a posi��o em que o registro do aluno com respectivo
RA foi encontrado no arranjo. Caso o registro n�o esteja presente no arranjo, a fun��o deve retornar o valor -1
(posi��o inexistente).*/
#include <stdio.h>

#define TAM 5
#define NIL -1

typedef struct{
	char nome[50];
	int ra;
} CADASTRO;

int retornaPosicao(CADASTRO *aluno, int ra_escolhido){
	for(int i = 0; i < TAM; i++){
		if(ra_escolhido == aluno[i].ra)
			return i; 
	}
	return NIL; 
}
int main(void){
	while(1){
		CADASTRO aluno[TAM] = {{"Ze Mane", 15700},{"Paulo", 15973}, {"Ciclano", 10000}, {"Fulano", 74103}, {"Joao", 85209}};
		int ra_escolhido = 0;
		printf("Insira o RA a ser buscado: ");
		scanf("%d", &ra_escolhido);
		
		int posicao = retornaPosicao(aluno, ra_escolhido);
		
		if(posicao == NIL)
			printf("O RA: %d nao foi encontrado na relacao de alunos cadastrados.\n", ra_escolhido);
		else
			printf("O Aluno: %s com RA: %d e POSICAO: %d, foi encontrado na relacao de alunos cadastrados.\n", aluno[posicao].nome, aluno[posicao].ra, posicao);
		for(int i = 0; i < 120; i++) printf("-");	
	}
}
