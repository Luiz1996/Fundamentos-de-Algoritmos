/*Faça uma função que receba, por parâmetro, a altura e o sexo de uma pessoa e retorne o peso
ideal. Fórmulas:
- Homens: peso ideal = ( 72.7 x altura ) - 58
- Mulheres: peso ideal = ( 62.1 x altura ) - 44.7*/
#include <stdio.h>

float pesoIdeal(float altura, char sexo){
	float peso = 0;
	
	if(sexo == 'm' or sexo == 'M'){
		peso = ( 72.7 * altura ) - 58;
	}else if(sexo == 'f' or sexo == 'F'){
		peso = ( 62.1 * altura ) - 44.7;
	}else {
		printf("\nSexo informado invalido, programa abortado!");
	}
	
	return peso;
}

int main(void){
	float altura, pesoCorreto;
	char sexo;
	
	printf("Forneca seu altura em Metros(m): ");
	scanf("%f", &altura);
	fflush(stdin);
	printf("Fornesa seu sexo [M/F]: ");
	scanf("%c", &sexo);
	
	pesoCorreto = pesoIdeal(altura, sexo);
	printf("\nPeso Ideal: %2.2f", pesoCorreto);
	
}
