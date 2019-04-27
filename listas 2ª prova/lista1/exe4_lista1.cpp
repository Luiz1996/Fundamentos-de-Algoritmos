/*Usando as fun��es anteriores, crie uma fun��o que receba tr�s valores, a, b e c e calcula as
ra�zes de uma equa��o do segundo grau: ax2 + bx + c = 0. Para ela existir, o coeficiente a deve ser diferente de
zero. Caso o delta seja maior ou igual a zero, as ra�zes ser�o reais. Caso o delta seja negativo, as reais ser�o
complexas e da forma: x + iy. A fun��o n�o precisa ter retorno, apenas imprima as ra�zes.*/
#include <stdio.h>
#include <math.h>

int Delta(int a, int b, int c){
	return ((pow(b,2)) - ((4*a)*c));
}

void raizes(int a, int b, int c){
	float x1 = 0, x2 = 0, delta = Delta(a,b,c);
	
	x1 = ((-1*(b)) + sqrt(delta)) / (2*a);
	x2 = ((-1*(b)) - sqrt(delta)) / (2*a);
	
	if(a == 0){
		printf("\nNao ha raizes, A == 0!\n");
	}else if(delta >= 0){
		printf("\nx' : %.2f", x1);
		printf("\nx'': %.2f", x2);
	}else if(delta < 0){
		printf("\nNao ha raizes reais quando delta < 0!\n");	
	}
}

int main(void){
	int val_a, val_b, val_c, delta = 0;
	
	printf("Entre com um numero inteiro: ");
	scanf("%d", &val_a);
	printf("Entre com um numero inteiro: ");
	scanf("%d", &val_b);
	printf("Entre com um numero inteiro: ");
	scanf("%d", &val_c);
	
	raizes(val_a, val_b, val_c);
}
