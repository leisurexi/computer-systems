//
// Created by leisurexi on 2020/8/5.
//

long mult2(long x, long y);

void multstore(long x, long y, long *dest) {
    long t = mult2(x, y);
    *dest = t;
}

