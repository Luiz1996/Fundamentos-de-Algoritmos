/*A série de Fibonacci:
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
começa com ostermos 0 e 1 e tem a propriedade de que cada termo subsequente é a soma dos dois termos
precedentes. Escreva uma função que receba como parâmetro um número n e retorne o n-ésimo número de
Fibonacci.*/
#include <stdio.h>

int fibonacci (int n){
    int a = 1, b = 1, x, i;
    
    if(n == 1){
		x = a;
	}else if(n == 2){
		x = b;
	}
	
    for(i = 3; i <= n; i++){
    	x = a + b;
    	a = b;
    	b = x;
	}
    
    return x;
}

int main(void){
	int n = 0, retorno;
	
	printf("Insira um numero: ");
	scanf("%d", &n);
	
	retorno = fibonacci(n);
	printf("\nO %do termo da serie de Fibonacci e %d.", n, retorno);
}
