/*Fa�a uma fun��o que receba um n�mero como par�metro e retorne 1 se ele o n�mero for
perfeito e 0 caso contr�rio. Um n�mero perfeito � aquele que � a soma de seus fatores. Por exemplo, 6 � divis�vel
por 1, 2 e 3 e tamb�m 6 = 1 + 2 + 3.*/
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
