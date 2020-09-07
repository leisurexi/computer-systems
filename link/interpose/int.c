//
// Created by leisurexi on 9/6/20.
//
#include <stdio.h>
#include <malloc.h>

int main() {
    int *p = malloc(32);
    free(p);
    return (0);
}
