/*Faça uma função que receba um número como parâmetro e retorne 1 se ele o número for
perfeito e 0 caso contrário. Um número perfeito é aquele que é a soma de seus fatores. Por exemplo, 6 é divisível
por 1, 2 e 3 e também 6 = 1 + 2 + 3.*/
#include <stdio.h>

int num_perfeito(int num){
	int resultado_soma = 0;
	for(int i = 1; i < num; i++){
		if(num % i == 0){
			resultado_soma += i;
		}
	}
	
	if(num == resultado_soma){
		return 1;
	}else if(num != resultado_soma){
		return 0;
	}
}

int main(void){
	int n, resultado;
	
	printf("Digite um numero natural: ");
	scanf("%d", &n);
	
	resultado = num_perfeito(n);
	printf("Resultado: %d", resultado);
	
	
}
