#include <stdio.h>
#include "logic.h"

int main() {
    int P, Q, R, f;

    printf("Truth Table for f = (P ⊕ Q ⊕ R)'\n");
    printf("---------------------------------\n");

    // Loop through all combinations of binary inputs
    for (P = 0; P <= 1; P++) {
        for (Q = 0; Q <= 1; Q++) {
            for (R = 0; R <= 1; R++) {
                f = compute_logic(P, Q, R);
                printf("P: %d  Q: %d  R: %d  => f: %d\n", P, Q, R, f);
            }
        }
    }

    return 0;
}

