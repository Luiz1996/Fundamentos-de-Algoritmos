#include <stdio.h>

int qtde_vogais(char *str){
	int qtde = 0;
    while(*str != '\0'){
		if(*str == 'a'  || *str == 'A'  || *str == 'e'  || *str == 'E'  || *str == 'i'  || *str == 'I'  || *str == 'o'  || *str == 'O'  || *str == 'u'  || *str == 'U')
			qtde++;
		str++;
	}
	return qtde;
}

int main(void){
	char str[100];
	int qtde = 0;
	
	printf("Insira uma string: ");
	scanf("%[^\n]s", str);
	
	qtde = qtde_vogais(str);
	printf("\nNa string \"%s\" ha %d vogai(s).", str, qtde);
}
