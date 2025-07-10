#include <stdio.h>
#include "logic.h"

int main() {
    int A, B, f;

    printf("Truth Table for f = A . B'\n");
    printf("--------------------------\n");

    for (A = 0; A <= 1; A++) {
        for (B = 0; B <= 1; B++) {
            f = compute_logic(A, B);
            printf("A = %d, B = %d => f = %d\n", A, B, f);
        }
    }

    return 0;
}

