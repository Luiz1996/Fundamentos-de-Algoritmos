#include <stdio.h>

int main(void){
	while(true){
		
		int numero = 0, por_15 = 0, por_5 = 0, por_3 = 0;
		
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		por_15 = numero % 15;
		por_5  = numero % 5;
		por_3  = numero % 3;
		
		if (por_15 == 0 && por_5 == 0 && por_3 == 0){
			printf("\nO numero %d eh divisivel pelos 3 numeros.\n\n", numero);
		}else if(por_15 == 0 && por_5 != 0 && por_3 != 0){
			printf("\nO numero %d eh divisivel por 15.\n\n", numero);
		}else if(por_15 != 0 && por_5 == 0 && por_3 != 0){
			printf("\nO numero %d eh divisivel por 5.\n\n", numero);
		}else if(por_15 != 0 && por_5 != 0 && por_3 == 0){
			printf("\nO numero %d eh divisivel por 3.\n\n", numero);
		}else {
			printf("\nNao eh divisivel por nenhum desses numeros.\n\n");
		}
	}
}
