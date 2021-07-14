#include "ft_printf.h"
int main()
{
	int l = 22;
	int len = ft_printf("hello check: %s%d%s %c %X %p dd\n", "hello", 22, "sss", 'a', 2677, (void *)NULL);
	int len1 = printf("hello check: %s%d%s %c %X %p dd\n", "hello", 22, "sss", 'a', 2677, (void *)NULL);
	printf("mylen: %d  len: %d\n", len, len1);
	// unsigned int b = -3;

	// printf("%d", b);
}