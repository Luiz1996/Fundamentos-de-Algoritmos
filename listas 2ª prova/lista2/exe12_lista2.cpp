/*O fatorial quádruplo de um número N é dado por: (2n)!
                                                    n!
. Faça uma função recursiva que receba um número inteiro positivo N e retorne o fatorial quádruplo desse número.*/
#include <stdio.h>
 
int calcula_fat_quadruplo(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	
	return n * calcula_fat_quadruplo(n-1);
}

int main(void){
	while(true){
		int n = 0; 
		float resultado = 0;
	
		printf("Insira um numero >= 1: ");
		scanf("%d", &n);
	
		if(n >= 1){
			resultado = calcula_fat_quadruplo(2 * n) / calcula_fat_quadruplo(n);  /*fat quadruplo*/
			printf("\nResultado: %.2f\n\n", resultado ); 
		}else{
			printf("\nNumero fornecido invalido !!!\n");
			continue;
		}
	}
}