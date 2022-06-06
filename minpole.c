#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

const int WIDTH = 10;
const int HEIGHT = 5;

int main() 
{
    srand(time(NULL));
    int mx, my;
    for(int i = 0; i < pocetMin; i++)
    {
        do
            {
                mx = rand() % WIDTH;
                my = rand() % HEIGHT;
            } while (pole[mx][my] == 9);
        pole[mx][my] = 9;
    }
    pole[4][2] = 9;

    for(y = 0; y < HEIGHT; y++)
    {
            for(x = 0; x < WIDTH; x++)
            {
                if(pole[x][y] == 9)
            {
            printf("\n");
        }
    return 0;
}
