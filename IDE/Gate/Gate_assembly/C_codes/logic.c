#include "logic.h"

// Function to compute the logic expression
int compute_logic(int P, int Q, int R) {
    int PQ = P && Q;
    int QR_ = Q && (!R);
    int PR_ = P && (!R);

    return PQ | QR_ | PR_;
}

