

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char   *new_memory;
    int             i;

    new_memory = malloc(nmemb * size);
    i = 0;
    while (i < size)
    {
        new_memory[i] = 0;
        i++;
    }
    return (new_memory);
}
