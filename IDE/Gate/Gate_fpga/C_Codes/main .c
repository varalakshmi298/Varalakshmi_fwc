#include <stdio.h>
#include "logic.h"

int main() {
    int x, y, z;

    printf("Truth Table for z = x ⊕ y\n");
    printf("-------------------------\n");

    for (x = 0; x <= 1; x++) {
        for (y = 0; y <= 1; y++) {
            z = compute_xor(x, y);
            printf("x = %d, y = %d => z = %d\n", x, y, z);
        }
    }

    return 0;
}

