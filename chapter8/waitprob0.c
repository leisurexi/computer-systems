//
// Created by leisurexi on 9/9/20.
//
#include "../include/csapp.h"

int main() {
    if (Fork() == 0) {
        printf("a");
        fflush(stdout);
    } else {
        printf("b");
        fflush(stdout);
        // zero will be wait child end
        waitpid(-1, NULL, 0);
    }
    printf("c");
    fflush(stdout);
    exit(0);
    // acbc
    // bacc
    // abcc
}

