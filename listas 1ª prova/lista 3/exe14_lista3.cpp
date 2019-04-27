#include <stdio.h>

int main(void){
	int num = 1;
	
	while(num >= 1){
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num == 1){//caso trivial
			printf("Fatorial: 1\n\n");
		}else if( num <= 0){//condicao de erro - programa fecha.
			printf("Valor invalido, o programa sera encerrado...\n\n");
		}else if(num > 1){
			
			unsigned long long fatorial = 1;
			while(num > 1){
				fatorial *= num;
				num--;
			}
			printf("Fatorial: %llu\n\n", fatorial);
		}
	}
}
