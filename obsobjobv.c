#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>


float krychle(float a){
    a=a*a*a;
    return a;
}
float ctverecS(float a){
    a=a*a;
    return a;
}
float ctverecO(float a){
    a=a*4;
    return a;
}

int main() {
    printf("Objem krychle - %.3f\n", krychle(5));
    printf("Obsah ctverce - %.3f\n", ctverecS(5.5));
    printf("Obvod ctverce - %.3f\n", ctverecO(5));
    return 0;  
}
