#include <stdio.h>
#include <math.h>

int main(){
	float num, base, log;
	printf("informe o numero");
	scanf("%f", &num);
	printf("informe a base");
	scanf("%f", &base);
	log = log10(num) / log10(base);
	printf ("O logaritmo e:\n%0.2f", log);
	return 0;
}
