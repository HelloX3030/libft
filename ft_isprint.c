#include <stdio.h>
#include <printf.h>

int ft_isprint(int c)
{
    return (c >= ' ' && c <= 127);
}

// int main(void)
// {
//     for (int i = 0; i <= 127; i++)
//         printf("%c: %i\n", i, ft_isprint(i));
// }
