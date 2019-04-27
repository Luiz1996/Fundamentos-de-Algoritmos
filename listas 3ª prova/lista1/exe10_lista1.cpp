#include <stdio.h>

#define QTDE_PRODUTOS 3

typedef struct{
	int  codigo;
	char nome[30];
	float preco;
} PRODUTOS;

int main(void){
	PRODUTOS produtos[QTDE_PRODUTOS];
	
	//cadastrando
	for(int i = 0; i < QTDE_PRODUTOS; i++){
		printf("Codigo: ");
		scanf("%d", &produtos[i].codigo);
		fflush(stdin);
		printf("Nome..: ");
		scanf("%[^\n]s", produtos[i].nome);
		printf("Preco.: ");
		scanf("%f", &produtos[i].preco);
		for(int i = 0; i < 120; i++) 
			printf("-");
	}
	
	//imprimindo cadastrados
	printf("------------------------------------------------- PRODUTOS CADASTRADOS -------------------------------------------------");
	for(int i = 0; i < QTDE_PRODUTOS; i++){
		printf("Codigo: %d | Nome: %s\n", produtos[i].codigo, produtos[i].nome);
		for(int i = 0; i < 120; i++) printf("-");
	}
	
	while(1){
		int codigo;
		printf("Insira o CODIGO a ser buscado: ");
		scanf("%d", &codigo);
		
		for(int i = 0; i < QTDE_PRODUTOS; i++){
			if(codigo == produtos[i].preco){
				printf("Codigo: %d | Nome: %s | Preco: %.2f\n", produtos[i].codigo, produtos[i].nome, produtos[i].preco);
				for(int i = 0; i < 120; i++) 
					printf("-");
			}
		}
	}
}
