#include <stdio.h>
#include <math.h>

int main(void){
	while(true){
		int num, quadrado;
		
		printf("Digite um numero: ");
		scanf("%d", &num);
				
		quadrado = pow(num,2);
		
		printf("O numero %d ao quadrado e: %d .\n\n", num, quadrado);
		if(num % 6 == 0){
			break;
		}	
	}
}
