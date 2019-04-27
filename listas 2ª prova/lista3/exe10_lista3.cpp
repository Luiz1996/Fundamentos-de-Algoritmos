#include <stdio.h>

int main(void){
	int a[15] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	
	for(int i = 0; i < 10; i++){
		int posicao = -1, num = 0;
		
		printf("-------------------------------------------------------%do ELEMENTO------------------------------------------------------", (i+1));
		printf("Insira um numero natural [>0]: ");
		scanf("%d", &num);
		printf("Posicao do vetor [0-14]: ");
		scanf("%d", &posicao);
		
		if(num < 0){
			printf("Valor invalido!\n\n");
			i--;
			continue;
		}
		if(a[posicao] == -1){
			a[posicao] = num;
			/**/
		}else{
			printf("Posicao ocupada!\n\n");
			i--;
			continue;
		}
	}
	
	for(int i = 11; i <= 15; i++){
		int num = 0;
		printf("-------------------------------------------------------%do ELEMENTO------------------------------------------------------", (i));
		printf("Insira um numero natural [>0]: ");
		scanf("%d", &num);
		
		for(int j = 0; j < 15; j++){
			if(a[j] == -1){
				a[j] = num;
				break;
			}
		}
	}
	
	printf("------------------------------------------------------------------------------------------------------------------------\nResultado: ");
	for(int i = 0; i < 15; i++){
		printf("%d ", a[i]);
	}
}
