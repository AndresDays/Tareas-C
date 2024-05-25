#include <stdio.h>
#include <math.h>

int potencia(int a,int b){
    return pow(a,b);
}

int main(){
    int a,b,power;

    printf("\nIngresa el numero que quieres elevar: ");
    scanf("%i",&a);

    printf("\nIngresa la potencia a la que lo quieres elevar: ");
    scanf("%i",&b);

    power = potencia(a,b);
    printf("\nEl numero %i elevado a la %i es: %i\n",a,b,power);
}