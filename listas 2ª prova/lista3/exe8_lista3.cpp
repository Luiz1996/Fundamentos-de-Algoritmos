#include <stdio.h>

int main(void){
	int a[15] = {0}, b[15] = {0};
	
	for(int i = 0; i < 15; i++){
		printf("%do elemento do vetor: ", (i+1));
		scanf("%d", &a[i]);
		b[14-i] = a[i];//invertendo
	}
	
	printf("\n");//pilar 1 linha
	//imprimindo vetor
	for(int i = 0; i < 15; i++){
		printf("%d ", b[i]);
	}
}
