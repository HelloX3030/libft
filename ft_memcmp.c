
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *s1_ptr;
    unsigned char   *s2_ptr;
    size_t          i;

    s1_ptr = (unsigned char) s1;
    s2_ptr = (unsigned char) s2;
    i = 0;
    while (s1_ptr[i] == s2_ptr[i] && i < n)
        i++;
    return (s1_ptr[i] - s2_ptr[i]);
}

