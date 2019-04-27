#include <stdio.h>

int main(void){
	
	int inter_0_25 = 0, inter_26_50 = 0, inter_51_75 = 0, inter_76_100 = 0, tam_laco;
	float num_escolhido;
	
	printf("Quantidade de numeros a ser lidos: ");
	scanf("%d", &tam_laco);
	
	for(int i = 1; i <= tam_laco; i++){
		printf("Escolha um numero: ");
		scanf("%f", &num_escolhido);
		
		if(num_escolhido >= 0 && num_escolhido < 26){
			inter_0_25++;
		}else if(num_escolhido < 51){
			inter_26_50++;
		}else if(num_escolhido < 76){
			inter_51_75++;
		}else if(num_escolhido <= 100){
			inter_76_100++;
		}
	}
	
	printf("\nIntervalor [00...025], quantidade: %d", inter_0_25);
	printf("\nIntervalor [26...050], quantidade: %d", inter_26_50);
	printf("\nIntervalor [51...075], quantidade: %d", inter_51_75);
	printf("\nIntervalor [76...100], quantidade: %d", inter_76_100);
}
