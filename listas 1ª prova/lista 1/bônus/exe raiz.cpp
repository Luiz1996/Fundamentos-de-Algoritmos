#include <stdio.h>
#include <math.h>

int main(void){
	
	long num;
		
	printf("Digite um numero:");
	scanf("%d", &num);
	
	float raiz = sqrt(num);
	
	printf("A raiz de %d eh: %.2f", num, raiz);
	
	return 0;
}
