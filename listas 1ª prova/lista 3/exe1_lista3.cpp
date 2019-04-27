#include <stdio.h>

int main(void){
	
	int num1, num2;
	printf("Digite um numero natural: ");
	scanf("%d", &num1);
	printf("Digite um numero natural: ");
	scanf("%d", &num2);
	
	if (num1 == num2){
		printf("\nNumeros iguais!");
	}else if(num1 < num2){ // numeros crescentes
		int contador, soma;
		
		while(num1 <= num2){
			soma += num1;
			contador++;
			num1++; 
		}
		printf("\nA media e: %d .", soma/contador);
	}else{ //numeros decrescentes
		int pares = 0;
		
		while(num2 <= num1){
			if(num2 % 2 ==0){
				pares++;
			}
			num2++; 
		}
		printf("\nPossui %d numero(s) par(es) no intervalo dado.", pares);
	}
	
	
}
