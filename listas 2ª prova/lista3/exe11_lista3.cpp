/*Escreva um programa que receba 15 numeros inteiros e os armazene em ordem crescente
em um arranjo. Em seguida, o programa deve mostrar os valores armazenados no arranjo. Dica: sempre que
for inserir um elemento, percorra o arranjo ate encontrar a posicao correta. Se a posicao correta estiver vazia,
simplesmente insira o elemento. Caso ela ja esteja ocupada, desloque todos os elementos a frente para a direita
para alocar espaco para o novo elemento.*/
#include <stdio.h>
#define tam 15

int main(void){
	int v[tam] = {0};
	
	//carregando vetor
	for(int i = 0; i < tam; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &v[i]);
	}
	
	//ordenando vetor
	for(int i = 0; i < tam; i++){
		for(int j = (i+1); j < tam; j++){
			if(v[j] < v[i]){
				int aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}
	
	//imprimindo resultado
	printf("\nResultado: ");
	for(int i = 0; i < tam; i++){
		printf("%d ", v[i]);
	}
}
