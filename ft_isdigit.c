#include <printf.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

// int main(void)
// {
//     for (int i = 0; i < 127; i++)
//         printf("%c:%i\n", i, ft_isdigit(i));
//     return (0);
// }
