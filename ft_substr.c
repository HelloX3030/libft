

#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new_str;
    size_t  i;

    i = 0;
    new_str = malloc(len);
    while (i < len)
    {
        new_str[i] = s[start + i];
        i++;
    }
    return (new_str);
}
