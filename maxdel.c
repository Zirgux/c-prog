#include <stdlib.h>
#include <stdio.h>

int minimum(int x, int y)
{
    return x <= y ? x : y;
}

int maxdelitel(int x, int y)
{
    for (int delitel = minimum(x, y); delitel > 1; delitel--)
    {
        if (x % delitel == 0 && y % delitel == 0)
        {
            return delitel;
        }
    }
    return 1;
}

void optzl(int citatel, int jmenovatel)
{
    printf("%i/%i = ", citatel, jmenovatel);
    int delitel = maxdelitel(citatel, jmenovatel);
    printf(
        "%i/%i\n",
        citatel / delitel,
        jmenovatel / delitel);
}
int main()
{
    printf(
        "Max delitel pro  18 a 4 je: %d\n",
        maxdelitel(18, 4));
    optzl(6, 15);
    optzl(5, 3);
    optzl(27, 6);
    optzl(16, 8);
    return 0;
}
