// logic.c
#include "logic.h"

int compute_logic(int X, int Y, int Z) {
    return ((!X) && (!Y)) || (Y && Z);
}
