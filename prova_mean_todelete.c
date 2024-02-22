#include "stupid_math.h"
#include <stdio.h>

int main(){
    int a=2;
    int b=6;
    float res;

    res=mean(a, b);
    printf("La media di %d e %d e' %f\n", a, b, res);
}