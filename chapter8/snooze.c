//
// Created by leisurexi on 9/9/20.
//
#include "../include/csapp.h"

void sigint_handler(int sig) {
    return;
}

unsigned int snooze(unsigned int secs) {
    unsigned int real_secs = sleep(secs);
    printf("Slept for %u of %u secs.", secs - real_secs, secs);
    return real_secs;
}

int main(int argc, char **argv) {

    if (argc != 2) {
        fprintf(stderr, "usage: %s <secs>\n", argv[0]);
    }

    if (signal(SIGINT, sigint_handler) == SIG_ERR) {
        unix_error("signal error\n");
    }

    snooze(atoi(argv[1]));
    exit(0);
}
