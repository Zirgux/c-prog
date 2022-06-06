#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char name[] = "Stepan";
    char surname[] = "Brzak";
    printf ("Jmenuji se " "%s %s.\n", name, surname);
    for (int i = 0; i<20; i++){
      printf ("Jmenuji se " "%s %s.\n", name, surname);
    }
    return 0;
}
