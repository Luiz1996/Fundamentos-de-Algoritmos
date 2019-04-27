#include <stdio.h>

int main(void){
	int v1[20], v2[20], v_res[40] = {0}, k = 0;
	
	for(int i = 0; i < 20; i++){
		printf("Insira o elemento %d do vetor 1: ", (i+1));
		scanf("%d", &v1[i]);
		printf("Insira o elemento %d do vetor 2: ", (i+1));
		scanf("%d", &v2[i]);
	}
	
	//carregando vetor resultante com os iguais
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 20; j++){
			if(v1[i] == v2[j]){
				v_res[k] = v1[i];
				k++;
				continue;
			}
		}
	}
	
	//colocando "0" no lugar dos numeros repetidos em v_res[]
	for(int i = 0; i < 20; i++){
		int teste = 0;
		for(int j = i; j < 20; j++){
			if(v_res[i] == v_res[j]){  
				teste++;
			}
			
			if(teste > 1){
				v_res[i] = 0;
			}
		}
	}
	
	//ordenando vetor v_res[](BubbleSort)
	for(int x = 0; x < 20; x++ ){
		int aux = 0;
    	for(int y = x + 1; y < 20; y++ ){
      		// se o (x > (x+1)) então o x passa pra frente (ordem crescente)
      		if ( v_res[x] > v_res[y] ){
         		aux = v_res[x];
         		v_res[x] = v_res[y];
         		v_res[y] = aux;
      		}
    	}
  	}
	
	printf("\nVetor Resultante: ");
	//imprimindo vetor resultante.
	for(int i = 0; i < 20; i++){
		//ignorando os valores no vetor == 0
		//if(v_res[i] != 0) 
			printf("%d ", v_res[i]);
	}	
}
