#include <printf.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

// int main(void)
// {
// 	for (int i = 0; i < 127; i++)
// 		printf("%c: %d\n", c, ft_isalpha(c));
// }
