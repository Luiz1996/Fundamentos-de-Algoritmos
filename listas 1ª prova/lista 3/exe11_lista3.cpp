#include <stdio.h>
#include <iostream>


//system ("cls"); limpar tela, tem que importar <iostream>
int main(void){
	float numerador = 2, denom1 = 1, aux = 0, resultado;
	
	for(int i = 1; i <= 50; i++){
		resultado = numerador / denom1;
		
		aux = denom1;
		denom1 = numerador;
		numerador += aux;	
		
		printf("Termo %2.d, resultado: %f .\n", i, resultado);
	}
}
