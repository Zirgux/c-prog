#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int sorting(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int analyza(int *arr, int size)
{
    int minval = arr[0], position = 0, num = arr[position],
        maxval = arr[4];
    printf("Nejmensi %i \n", minval);
    printf("Nejvetsi %i \n", maxval);

    int x = 0;
    for (int i = 0; i < size; i++)
    {
        x += arr[i];
        position = i;
    }
    float z = (x - (maxval + minval)) / (float)(size - 2);
    printf("Prumerna hodnota bez min a max je %.2f\n", z);
}

int analyza2(int *arr, int size)
{
    int position = 0, num = arr[position], x = 0;
    for (int i = 0; i < size; i++)
    {
        x = x + arr[i];
    }
    printf("Soucet tohoto pole je %i\n", x);

    float y = (float)x / (float)size;
    printf("Prumerna hodnota tohoto pole je %.2f\n", y);
}

int main()
{
    int pole[5], x;
    srand(time(0));
    for (int i = 0; i < sizeof(pole) / 4; i++)
    {
        x = rand() % (100 - 1 + 1) + 1;
        pole[i] = x;

        printf("%i\n", pole[i]);
    }
    qsort(pole, 5, sizeof(int), sorting);
    analyza(pole, sizeof(pole) / 4);
    analyza2(pole, sizeof(pole) / 4);
    return 0;
}
