#include <stdio.h>
#define QTDE_CARROS 30

typedef struct{
	char letras[3];
	char numeros[4];
} PLACAS;


typedef struct{
	char  modelo[10];
	int   ano;
	float preco;
	PLACAS placa;
} CARROS;

int main(void){
	CARROS carros[QTDE_CARROS];
	
	for(int i = 0; i < QTDE_CARROS; i++){
		printf("Insira Modelo: ");
		scanf("%[^\n]s", carros[i].modelo);
		printf("Insira ano: ");
		scanf("%d", &carros[i].ano);
		printf("Insira o Preco: ");
		scanf("%f", &carros[i].preco);
		printf("Insira a Placa: ");
		scanf("%s-%s", carros[i].placa.letras, carros[i].placa.numeros);
		fflush(stdin);
		printf("------------------------------------------------------------------------------------------------------------------------");
	}
	
	float preco_menor = carros[0].preco;
	int menor = 0;
	for(int i = 1; i < QTDE_CARROS; i++){
		if(carros[i].preco < preco_menor)
			menor = i;
	}
	
	printf("------------------------------------------------------ RESULTADO -------------------------------------------------------");
	printf("Modelo: %s\n", carros[menor].modelo);
	printf("Ano...: %d\n", carros[menor].ano);
	printf("Preco.: %.2f\n", carros[menor].preco);
	printf("Placa.: %s\n", carros[menor].placa.letras);
}
