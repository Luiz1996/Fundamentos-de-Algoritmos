#include <stdio.h>
#include <math.h>

int main(void){
	for(int i = 1; i <= 2; i++){
		int num = 0, raiz = 0;
		
		printf("Informe um numero natural: ");
		scanf("%d", &num);
		
		if(num < 0){
			i--;// apenas para manutenção do for
			printf("Valores negativos nao sao autorizados neste sistema.\n\n");
			continue;
		}
		
		raiz = sqrt(num);
		printf("A raiz quadrada de %d e %d .\n\n", num, raiz);
	}
}
