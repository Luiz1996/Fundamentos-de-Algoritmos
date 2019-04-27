#include <stdio.h>
#include <math.h>

int main(void){
	int n = 0;
	
	printf("Digite um numero > 0: ");
	scanf("%d", &n);
	
	float v[n] = {0};
	for(int i = 0; i < n; i++){
		v[i] = sqrt((i*n));
	}
	
	for(int i = 0; i < n; i++){
		printf("\nsqrt(%d * %d) = %.2f ", i, n, v[i]);
	}
	
}
