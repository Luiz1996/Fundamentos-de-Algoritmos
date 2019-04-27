#include <stdio.h>
#include <string.h>

typedef struct{
	char titulo[50];
	char autor[50];
	char editora[50];
	int ano;
} LIVRO;

int main(void){
	LIVRO livro;
	
	strcpy(livro.titulo,  "Dom Casmurro.");
	strcpy(livro.autor,   "Machado de Assis.");
	strcpy(livro.editora, "Saraiva.");
	livro.ano = 1899;
	
	printf("Titulo.: %s\n", livro.titulo);
	printf("Autor..: %s\n", livro.autor);
	printf("Editora: %s\n", livro.editora);
	printf("Ano Pbl: %d." , livro.ano);	
}
