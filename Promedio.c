#include <stdio.h>
#include <stdlib.h>

int main(){

    float cals[5][6] = {{9.5,9.0,7.5,6.5,8.0,0},
                        {10.0,9.0,8.0,7.0,6.0,0},
                        {6.0,7.5,8.5,9.5,7.0,0},
                        {6.5,7.5,8.5,9.5,10.0,0},
                        {6.0,10.0,7.5,9.0,7.5,0}};
    
    for(int i = 0 ; i < 5; i++)
    {
        float prom = 0;
        for (int j = 0; j < 5; j++)
        {
            prom += cals[i][j];  
            printf("Calificacion (%i,%i) = %f\n\n",i,j,cals[i][j]);
        }
        
        printf("\n");
        cals[i][5] = prom/5;
        printf("El promedio de la fila %i es %.2f.\n\n",i,cals[i][5]);
    }
}