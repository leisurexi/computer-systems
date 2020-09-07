//
// Created by leisurexi on 9/6/20.
//
#include <stdio.h>

#ifndef COMPTURE_SYSTEMS_MALLOC_H
#define COMPTURE_SYSTEMS_MALLOC_H

#define malloc(size) mymalloc(size)
#define free(ptr) myfree(ptr)

void *mymalloc(size_t size);
void myfree(void *ptr);

#endif //COMPTURE_SYSTEMS_MALLOC_H
