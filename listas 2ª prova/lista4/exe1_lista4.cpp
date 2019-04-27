#include <stdio.h>

int tam_str(char *str){
	int tam = 0;
    while(*str != '\0'){
		tam++;
		str++;
	}
	return tam;
}

int main(void){
	char str[100], caracter;
	
	printf("Insira uma string: ");
	scanf("%[^\n]s", str);

	int tam = tam_str(str);
	printf("\nA string \"%s\" tem tamanho: %d.", str, tam);
	
}
