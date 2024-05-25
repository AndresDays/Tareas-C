#include <stdio.h>

int main(){
	int ah,m,ca=0,i;
	for(m=1; m < 13;m++){
	printf("Cantidad ahorrada en el mes %i: $", m);
	scanf("%i",&ah);
	ca=ca+ah;
	printf("\tLlevas ahorrados %i pesos.\n\n",ca);
	}
	printf("Ahorraste %i pesos en todo el a%co.",ca,164);
}
