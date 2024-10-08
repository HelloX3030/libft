#include <stdio.h>
#include <printf.h>

size_t  ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

// static void    test(const char* c)
// {
//     printf("%s: %ld\n", c, ft_strlen(c));
// }

// int main(void)
// {
//     test("Haus");
//     test("a");
//     test("ab");
//     test("hh\0gg");
//     test("TT\tTT");
// }
