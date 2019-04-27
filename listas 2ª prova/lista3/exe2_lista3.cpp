#include <stdio.h>

int main(void){
	int n = 5000, contador = 0, vetor[20] = {0};
	
	while(contador < 20){
		int verifica = 0;
		for(int i = 1; i <= n; i++){
			if(n % i == 0){
				verifica++;
			}
		}
		
		if(verifica == 2){
			vetor[contador] = n;
			contador++;
		}
		n++;
	}
		
	for(int i = 0; i < 20; i++){
		printf("%d ", vetor[i]);
	}

}
