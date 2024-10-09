
#include <stdlib.h>
#include "libft.h"

char *strdup(const char *s)
{
    char        *new_str;
    const int   s_len = ft_strlen(s);

    new_str = malloc(s_len);
    ft_strlcpy(new_str, s, s_len);
    return (new_str);
}
