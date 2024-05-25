#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main(){
    int fa;

    for(fa=UPPER;fa>=LOWER;fa=fa-STEP)
        printf("%4.0d %6.1f\n",fa,(5.0/9.0)*(fa-32));
      
}

 