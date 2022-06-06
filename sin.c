#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.142857

int main()
{
    printf("uhel\tsin(uhel)\n");
    for(int uhel = 0; uhel <=360; uhel += 30)
    {
        printf("%3d\n", uhel);
    }

    return 0;
}
