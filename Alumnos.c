#include <stdio.h>

int main(){
	float pi;
	int alumnos,tp;
	printf("Cuantos alumnos van ir:\n");
	scanf("%i", &alumnos);
	if (alumnos >= 100){
		printf("El costo por cada alumnos ser%c de 65 pesos.\n",160);
		tp = alumnos*65;
		printf("El total a pagar a la compa%c%ca de autobuses es de %i pesos.\n",164,161,tp);
	}
	else if(alumnos > 49 && alumnos < 100){
		printf("El costo por cada alumno ser%c de 70 pesos.\n",160);
		tp = alumnos*70;
		printf("El total a pagar a la compa%c%ca de autobuses es de %i pesos.\n",164,161,tp);
	}
	else if(alumnos > 29 && alumnos < 50){
		printf("El costo por cada alumno ser%c de 95 pesos.\n",160);
		tp = alumnos*95;
		printf("El total a pagar a la compa%c%ca de autobuses es de %i pesos.\n",164,161,tp);
	}
	else if(alumnos < 30){
		pi = 4000/alumnos;
		printf("El costo por cada alumno ser%c de %f pesos.\n",160, pi);
		printf("El total a pagar a la compa%c%ca de autobuses es de 4000 pesos.\n",164,161);
	}
}
