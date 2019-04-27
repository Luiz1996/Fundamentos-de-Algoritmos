#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}
	
	return fib(n-1) + fib(n-2);
}

int main(void){
	while(true){
		int n = 0, fibonacci = 0;
		
		printf("Digite um numero natual >= 1 para N: ");
		scanf("%d", &n);
		
		//validando n para calculo do fibonacci
		if(n <= 0){
			system("cls");
			printf("Numero incorreto, tente novamente!\n\n");
			continue;
		}
		
		fibonacci = fib(n);
		printf("O %do termo da sequencia de Fibonacci eh: %d.\n\n", n, fibonacci);
	}
}
