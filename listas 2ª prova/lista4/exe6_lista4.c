#include <stdio.h>

void suf_str(char *a, char *b){
	int tam_a = strlen(a), tam_b = strlen(b), i;
	char recebe_suf_de_b[100];
	recebe_suf_de_b[0] = '\0';

	for(i = tam_b - tam_a; i < tam_b; i++){
		recebe_suf_de_b[i - (tam_b - tam_a)] = b[i];
	}
	recebe_suf_de_b[i] = '\0';
	if(strcmp(recebe_suf_de_b, a) == 0)
		printf("\nA string \"%s\" eh sufixo da string \"%s\"", a, b);
	else
		printf("\nA string \"%s\" NAO EH sufixo da string \"%s\"", a, b);
}

int main(void){
	char a[100], b[100];

	printf("String A: ");
	scanf("%[^\n]s", a);
	fflush(stdin);
	printf("String B: ");
	scanf("%[^\n]s", b);

	suf_str(a, b);
}