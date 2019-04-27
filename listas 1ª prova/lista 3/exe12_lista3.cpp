#include <stdio.h>

int main(void){
	int pares = 0, impares = 0,num = 0;;
	
	for(int cont = 1; cont <= 5; cont++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num == 0){
			printf("Nem par e nem impar, tente outro numero.\n");
			cont--;
		}else if(num % 2 == 0){
			pares++;
		}else if(num % 2 != 0){
			impares++;
		}
	}
	
	printf("\nPares: %d  |  Impares: %d", pares, impares);
}
