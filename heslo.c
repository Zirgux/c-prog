#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <time.h>

const int SIZE = 25;
const int R = 20;

int main ()
{
    srand(time(NULL));
    char z;
    for (int i = 0; i <= SIZE; i++)
    {
        z = rand() % 06 + 65;
        printf("%c", z);
    }
}
    
