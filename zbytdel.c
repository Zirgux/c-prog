#include <stdio.h>

int division(int x, int y) {
    int num;
    while (x >= y)
    {
        x = x - y;
    }
    num = x;
    printf("Zbytek po deleni: %d", num);
}

int main()
{
    division(100, 32);
    return 0;
}
