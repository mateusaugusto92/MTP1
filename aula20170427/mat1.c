#include <stdio.h>
#include <math.h>

int main(){
	float x1, x2, y1, y2, d, x, y;
	printf("informe o x1");
	scanf("%f", &x1);
	printf("informe o x2");
	scanf("%f", &x2);
	printf("informe o y1");
	scanf("%f", &y1);
	printf("informe o y2");
	scanf("%f", &y2);
	x = x2 - x1;
	y = y2 - y1;
	d = sqrt(pow(x , 2)+pow (y , 2));
	printf("A distancia entre os pontos e: %0.2f", d);
	return 0;
	
}
