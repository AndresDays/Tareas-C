#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mayor = 0,array,a[array],i;

    printf("Ingrese tamano del arreglo: ");
    scanf("%i",&array);

    for(i=0;i<array;i++){
        printf("Ingrese valor de Array[%i]",i);
        scanf("%i",&a[i]);
    }

    for(i=0;i<array;i++){
        if(a[i] > mayor){
            mayor = a[i];
        }
    }

    printf("El numero mas grande es %i",mayor);
}

