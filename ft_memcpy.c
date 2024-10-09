
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *dest_ptr;
    unsigned char   *src_ptr;
    size_t  i;

    dest_ptr = (unsigned char *) dest;
    src_ptr = (unsigned char *) src;
    i = -1;
    while (++i < n)
        dest_ptr[i] = src_ptr[i];
    return (dest);
}

// #include <string.h>
// #include <stdlib.h>

// void test(const char *src, const char *dest, size_t n) 
// {
//     char    *dest_new = malloc(strlen(dest) + 1);

//     if (dest_new == NULL)
//         return;
//     strcpy(dest_new, dest);
//     ft_memcpy(dest_new, src, n);
//     printf("src: %s, dest: %s, result: %s\n", src, dest, dest_new);
//     free(dest_new);
// }

// int main(void)
// {
//     test("ABC", "RRAATT", 2);
// }
