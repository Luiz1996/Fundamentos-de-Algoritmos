#include <stdio.h>
#include <stdlib.h>

int fat(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	
	return n * fat(n-1);
}

int main(void){
	while(true){
		int n = 0, fatorial = 0;
		
		printf("Digite um numero natual >= 0: ");
		scanf("%d", &n);
		
		//validando n para calculo do fatorial
		if(n < 0 ){
			system("cls");
			printf("Numero incorreto, tente novamente!\n\n");
			continue;
		}
		
		//calculando fatorial e imprimindo resultado
		fatorial += fat(n);
		printf("O fatorial de %d eh: %d.\n\n", n, fatorial);
	}
	
	
}
