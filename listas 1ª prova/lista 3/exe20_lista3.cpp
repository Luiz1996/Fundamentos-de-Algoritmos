#include <stdio.h>

int main(void){
	int n, resultado_soma;
	
	printf("Digite um numero natural: ");
	scanf("%d", &n);
	
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			resultado_soma += i;
		}
	}
	
	if(n == resultado_soma){
		printf("\n%d e considerado PERFEITO.", n);
	}else if(n != resultado_soma){
		printf("\n%d NAO e considerado PERFEITO.", n);
	}
}
