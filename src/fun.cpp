// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int a = 1;
    int i;
    for (i = 0, i < n, i++) {
        a = a * x;
    }
    return a;
}
