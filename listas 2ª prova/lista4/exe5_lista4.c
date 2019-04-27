#include <stdio.h>
#include <string.h>

void pref_str(char *a, char *b){
	int tam_a = strlen(a), i;
	char recebe_pref_de_b[100];
	recebe_pref_de_b[0] = '\0';

	for(i = 0; i < tam_a; i++){
		recebe_pref_de_b[i] = b[i];
	}
	recebe_pref_de_b[i] = '\0';
	if(strcmp(recebe_pref_de_b, a) == 0)
		printf("\nA string \"%s\" eh prefixo da string \"%s\"", a, b);
	else
		printf("\nA string \"%s\" NAO EH prefixo da string \"%s\"", a, b);
}

int main(void){
	char a[100], b[100];

	printf("String A: ");
	scanf("%[^\n]s", a);
	fflush(stdin);
	printf("String B: ");
	scanf("%[^\n]s", b);

	pref_str(a, b);
}
