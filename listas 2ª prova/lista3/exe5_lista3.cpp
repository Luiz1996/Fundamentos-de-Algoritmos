#include <stdio.h>
#define TAM_MAX 100

int main(void){
	int v[TAM_MAX] = {0}, menor = 9999999, maior = -999999;
	float perc_pares, media = 0.0;
	
	for(int i = 0; i < TAM_MAX; i++){
		printf("Digite o %d elemento do vetor: ", (i+1));
		scanf("%d", &v[i]);
		media += v[i];
		
		if(menor > v[i]){
			menor = v[i];
		}else if(v[i] > maior){
			maior = v[i];
		}
		
		if(v[i] % 2 == 0){
			perc_pares++;
		}
	}
	
	printf("\nMenor: %d", menor);
	printf("\nMaior: %d", maior);
	printf("\nPares: %.2f %%", perc_pares);
	printf("\nMedia: %.2f", media /= TAM_MAX);
}
