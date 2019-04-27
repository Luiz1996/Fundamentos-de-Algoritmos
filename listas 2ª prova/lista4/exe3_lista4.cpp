#include <stdio.h>

void muda_espacos(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			str[i] = '_';
		}else{
			str[i] = str[i];
		}
	}
	printf("\nResultado: \"%s\"", str);
}

int main(void){
	char str[100];
	int qtde = 0;
	
	printf("Insira uma string: ");
	scanf("%[^\n]s", str);
	
	muda_espacos(str);
}
