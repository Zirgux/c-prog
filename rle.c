#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rle(char *toCompress)
{
    int len = strlen(toCompress);
    int counter = 1;
    for (int i = 0; i < len; i++)
    {
        if ((int)toCompress[i] == (int)toCompress[i + 1] && toCompress[i] != '\0')
        {
            counter++;
        }
        else
        {
            printf("%i%c", counter, toCompress[i]);
            counter = 1;
        }
    }
    printf("\n");
}

int main()
{
    char pole[] = "HELLOOOO"; // potom ... AAAAABB
    rle(pole);
    return 0;
}
