/*A s�rie de Fibonacci:
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
come�a com ostermos 0 e 1 e tem a propriedade de que cada termo subsequente � a soma dos dois termos
precedentes. Escreva uma fun��o que receba como par�metro um n�mero n e retorne o n-�simo n�mero de
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
