#include <stdio.h>

int main(void){
	while(true){
		int num = 0, contador = 0;
		
		printf("Insira um numero: ");
		scanf("%d", &num);
		
		if(num <= 1){
			printf("Opcao invalida, tente novamente mais tarde.");
		}else{
			for(int i = 2; i < num; i++){
				if(num % i == 0){
					contador++;
				}
			}
		}
		
		if(contador > 0){
			printf("O numero %d nao e primo.\n\n", num);
		}else{
			printf("O numero %d e primo.\n\n", num);
		}
	}
}
