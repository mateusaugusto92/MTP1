#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256

int main(){
	int i=0, j=0;
	char frase[NCHAR];
	printf("Digite uma frase:\n");
	fgets(frase, NCHAR, stdin);
	for (i=0; frase[i]; i++)
	if (isalpha(frase[i]) ) j++;
	printf("\nA frase tem %d letras", j);
	return EXIT_SUCCESS;
	
}
