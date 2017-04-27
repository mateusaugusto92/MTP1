#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256

int main(){
	int i;
	char frase[NCHAR];
	printf("Digite uma frase:\n");
	fgets(frase, NCHAR, stdin);
	for (i=0; frase[i]; i++)
	   frase[i] = tolower (frase[i]);
	printf("\na frase em minusculas e:\n%s", frase);
	return EXIT_SUCCESS;
	
}
