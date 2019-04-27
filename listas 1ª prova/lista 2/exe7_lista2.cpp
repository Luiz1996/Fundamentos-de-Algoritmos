#include <stdio.h>

int main(void){
	while(true){
	
		int x = 0, y = 0;
		
		printf("Digite a coordenada de X: ");
		scanf("%d", &x);
		printf("Digite a coordenada de Y: ");
		scanf("%d", &y);
		
		if (x == 0 && y == 0){
			printf("\nO ponto dado esta na origem(O) do plano cartesiano.");
		}else if(x > 0 && y > 0){
			printf("\nO ponto (%d,%d) esta no primeiro quadrante.", x, y);
		}else if(x < 0 && y > 0){
			printf("\nO ponto (%d,%d) esta no segundo quadrante.", x, y);
		}else if(x < 0 && y < 0){
			printf("\nO ponto (%d,%d) esta no terceiro quadrante.", x, y);
		}else if(x > 0 && y < 0){
			printf("\nO ponto (%d,%d) esta no quarto quadrante.", x, y);
		}else if(x == 0 && y != 0){
			printf("\nO ponto (%d,%d) esta sobre o eixo Y.", x, y);
		}else if(x != 0 && y == 0){
			printf("\nO ponto (%d,%d) esta sobre o eixo X.", x, y);
		}
		printf("\n------------------------------------------------------------------------------------------------------------------------");
	}
}
