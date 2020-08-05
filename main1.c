//
// Created by leisurexi on 2020/8/5.
//
#include <stdio.h>

long mult2(long x, long y) {
    long s = x * y;
    return s;
}

void multstore(long, long, long *);

int main() {
    long d;
    multstore(2, 3, &d);
    printf("2 * 3 --> %ld\n", d);
    return 0;
}

