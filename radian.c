#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

double Convert(double radian){
    double pi = 3.14159;
    return(radian * (180/pi));

}

int main(){
    double radian = 98.5930;
    double degree = Convert(radian);
    printf("%.5lf", degree);

    return 0;
}
