/*Faça um programa que leia um arquivo contendo o nome e o preço de diversos produtos
(separados por linha), e calcule o total da compra.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	//abrindo primeiro arquivo para leitura
	FILE *p_leitura = fopen("produtos.txt", "r");
	
	char buffer_produtos[1000], produtos[50];
	float total, valor = 0;
	buffer_produtos[0] = '\0';
	
	//fazendo leitura do arquivo
	int ver = fscanf(p_leitura, "%s", produtos);
	while(ver != EOF){
		if(ver != EOF){
			strcat(buffer_produtos, produtos);
			strcat(buffer_produtos, ",");
		}
		fscanf(p_leitura, "%f", &valor);
		total += valor;
		ver = fscanf(p_leitura, "%s", produtos);
	}
	
	printf("A compra dos produtos: %s ficou em %.2f reais.", buffer_produtos, total);
}
