#include <stdio.h>
#include <math.h>

int main(void){
	float num;
	
	printf("Digite um numero real: ");
	scanf("%f", &num);
	
	printf("A raiz quadrada de %.2f eh: %.2f", num, sqrt(num));
}
