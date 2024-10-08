#include <stdio.h>
#include <printf.h>

static int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

static int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

int main(void)
{
    for (int i = 0; i < 127; i++)
        printf("%c: %i\n", i, ft_isalnum(i));
}
