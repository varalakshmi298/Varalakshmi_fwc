// main.c
#include <stdio.h>
#include "logic.h"

int main() {
    int X, Y, Z;
    int F;

    for (X = 0; X <= 1; X++) {
        for (Y = 0; Y <= 1; Y++) {
            for (Z = 0; Z <= 1; Z++) {
                F = compute_logic(X, Y, Z);
                printf("X = %d, Y = %d, Z = %d => F = %d\n", X, Y, Z, F);
            }
        }
    }

    return 0;
}
