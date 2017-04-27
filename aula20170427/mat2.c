#include <stdio.h>
#include <math.h>

int main(){
	float l1, l2, l3, ang;
	printf("informe o l1");
	scanf("%f", &l1);
	printf("informe o l2");
	scanf("%f", &l2);
	printf("informe o angulo");
	scanf("%f", &ang);
	l3 = sqrt ((pow (l1 , 2)) + (pow (l2 , 2)) - (2 * l1 * l2) * cos(ang));
	printf ("o terceiro lado mede %0.2f", l3);
	return 0 ;
}
