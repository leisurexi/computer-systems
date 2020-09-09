//
// Created by leisurexi on 9/9/20.
//
#include "../include/csapp.h"

unsigned int snooze(unsigned int secs) {
    unsigned int real_secs = sleep(secs);
    printf("Slept for %u of %u secs.", secs - real_secs, secs);
    return real_secs;
}

int main() {
    snooze(10);
}
