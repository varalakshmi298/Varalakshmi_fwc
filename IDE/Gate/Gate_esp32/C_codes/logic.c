#include "logic.h"

// Computes f = A . B' => A AND (NOT B)
int compute_logic(int A, int B) {
    return A && (!B);
}

