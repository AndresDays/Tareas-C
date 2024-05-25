#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,i,a=0,b=1;

    printf("Cuantos numero quieres: ");
    scanf("%i",&num);

    for(i=0;i<num;i++){
         a= a + b;
         b = a - b;
          printf("%i ", a);
    }
}
