/*Um professor, muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas
notas mais altas para calcular a média. Faça uma função em C que receba como parâmetro o valor das 3 notas
e retorne a média somente considerando as duas notas mais altas.*/
#include <stdio.h>

float Media(int n1, int n2, int n3){
	int menor = n1;
	
	if(n2 < menor){
		menor = n2;
	}
	if(n3 < menor){
		menor = n3;
	}
	
	return ((n1+n2+n3)-menor)/2;
}

int main(void){
	while(true){
		int nota1, nota2, nota3;
		float media;
		
		printf("Insira nota1: ");
		scanf("%d", &nota1);
		printf("Insira nota2: ");
		scanf("%d", &nota2);
		printf("Insira nota3: ");
		scanf("%d", &nota3);
		
		media = Media(nota1, nota2, nota3);
		printf("\nMedia: %.2f\n\n", media);
		}
}
