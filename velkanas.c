#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main ()
{
    int i, j;
    for (j = 1; j <= 10; j++)
    {
        for (i = 11; i <= 20; i++)
        {
            printf("%5d",i * j);
        }
        printf("\n");
    }
  return 0;
}
