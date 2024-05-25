#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,ar;
	float at,att;
	printf("Cuanto mide el lado A (metros): ");
	scanf("%i",&a);
	printf("Cuanto mide el lado B (metros): ");
	scanf("%i",&b);
	printf("Cuanto mide el lado C (metros): ");
	scanf("%i",&c);
	ar = b*c;
	at = ((a-c)*b)/2;
	att = at+ar;
	printf("El %crea total del terreno es de %.2f metros cuadrados.",160, att);
	
}
