#include <stdio.h>

int main() {
    int suma = 0;
    for (int i = 1; i<=100; i++){
        suma = suma + i;
    }
    printf ("Suma je %d", suma);   
    return 0;
}
