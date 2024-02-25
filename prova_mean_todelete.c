#include "stupid_math.h"
#include <stdio.h>

int main(){
    int a=1;
    int b=2;
    float res;

    res=mean(a, b);
    printf("La media di %d e %d e' %f\n", a, b, res);
}