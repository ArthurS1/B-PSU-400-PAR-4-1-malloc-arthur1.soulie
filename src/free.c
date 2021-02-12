/*
** EPITECH PROJECT, 2021
** B-PSU-400-PAR-4-1-malloc-arthur1.soulie
** File description:
** free.c
*/

#include "malloc.h"

void free(void *addrs)
{
    meta_t *meta = NULL;

    if (addrs) {
        meta = (meta_t *)(addrs - sizeof(meta_t));
        meta->free = true;
    }
}
