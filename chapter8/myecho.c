//
// Created by leisurexi on 9/9/20.
//
#include "../include/csapp.h"

int main(int argc, char *argv[], char *envp[]) {
    printf("argc: %d\n", argc);
    printf("Command-line arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    printf("Environment variables:\n");
    int i = 0;

    for (int i = 0; i < sizeof(*envp) / sizeof(*envp[0]); i++) {
        char *c = envp[i];
        printf("envp[%d]: %s\n", i, &*c);
    }
}
