#include <printf.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

// void test(int c)
// {
// 	printf("%c: %d\n", c, ft_isalpha(c));
// }

// int main(void)
// {
// 	for (int i = 0; i < 127; i++)
// 		test(i);
// }
