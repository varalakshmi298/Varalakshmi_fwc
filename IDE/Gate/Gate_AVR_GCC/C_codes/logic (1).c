#include "logic.h"

// Function to compute f = !(P ⊕ Q ⊕ R)
int compute_logic(int P, int Q, int R) {
    return !(P ^ Q ^ R);
}

