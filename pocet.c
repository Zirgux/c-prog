#include <stdio.h>
#include <stdlib.h>

int solve(int hlavy, int nohy)
{
    int x = 0, a = 0;
    a = (nohy - (2 * hlavy)) / 2;
    x = (nohy - (4 * a)) / 2;
    if (x < 0 || a < 0)
    {
        printf("\nVlozena spatna cisla.");
    }
    else
    {
        printf("\nSlepice = %d, Kravy = %d", x, a);
    }
}

int main(void)
{
    int h, l;
    printf("Pocet hlav: ");
    scanf("%d", &h);
    printf("\nPocet nohou: ");
    scanf("%d", &l);

    solve(h, l);
}
