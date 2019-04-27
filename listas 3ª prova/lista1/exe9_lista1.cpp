/*Escrever um programa que leia 5 pontos em um plano, sendo que cada ponto é um registro
e possui duas medidas (x e y). Em seguida imprima qual o ponto mais próximo do primeiro ponto lido. Use a
distância euclidiana para medir a distância entre os pontos.*/
#include <stdio.h>
#include <math.h>

#define TAM 5

typedef struct{
	int x;
	int y;
} PONTO;

float dist(PONTO *pontos, int i){
	return sqrt(pow((pontos[0].x - pontos[i].x), 2) + pow((pontos[0].y - pontos[i].y), 2));	
}

int main(void){
	PONTO pontos[TAM];
	float distancias[TAM - 1];
	
	//carregando vetor com os 5 pontos
	for(int i = 0; i < TAM; i++){
		printf("Insira a cordenada X do Ponto %d: ", (i+1));
		scanf("%d", &pontos[i].x);
		printf("Insira a cordenada Y do Ponto %d: ", (i+1));
		scanf("%d", &pontos[i].y);
		for(int i = 0; i < 120; i++) printf("-");
	}
	
	//calculando as distancias
	for(int i = 0; i < (TAM - 1); i++){
		distancias[i] = dist(pontos, (i+1));
	}
	
	//descobrindo a menor distancia
	float menor = distancias[0];
	for(int i = 1; i < TAM -1; i++){
		if(distancias[i] < menor)
			menor = distancias[i];
	}
	printf("\n\nA menor distancia eh: %.2f.", menor);
}
