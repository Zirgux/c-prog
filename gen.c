#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void generate_items(float *pole) {
    for (int i = 0; i < 10; i++) {
        pole[i] = (float)rand() / 1000;
    }
}

void show_items(float *pole) {
    for (int i = 0; i < 10; i++) {
        printf("%f", pole[i]);
        printf("\n");
    }
}

void round_items(float *pole) {
    for (int i = 0; i < 10; i++) {
        pole[i] = ceilf(pole[i] * 100) / 100;
    }
}

int main() {
    float pole[10] = {};
    float *pointer = pole;

    srand((unsigned)time(NULL));

    generate_items(pointer);
    show_items(pointer);
    round_items(pointer);
    show_items(pointer);
    
    return 1;
}
