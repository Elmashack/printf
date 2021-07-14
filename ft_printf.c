#include "ft_printf.h"
int	ft_type_def(char **str, va_list arg)
{
	int	len;

	len = 0;
	if (**str == 'd' || **str == 'i')
		len = ft_print_d(va_arg(arg, int));
	if (**str == 's')
		 len = ft_print_s(va_arg(arg, char *));
	if (**str == 'c' || **str == '%')
		len = ft_print_ch(str, va_arg(arg, int));
	if (**str == 'p')
		len = ft_print_ptr(va_arg(arg, unsigned long));
	if (**str == 'u')
		len = ft_print_u(va_arg(arg, unsigned int));
	if (**str == 'x' || **str == 'X')
		len = ft_print_xX(va_arg(arg, unsigned int), str);
	if (!(ft_strchr("cspdiuxX%", **str)))
		return (0);
	(*str)++;
	return (len);
}

int	ft_parsing(char **str, va_list arg)
{
	int		len;

	len = ft_type_def(str, arg);
	return (len);
}

int	ft_printf(const char *frm, ...)
{
	va_list	ap;
	int		res;
	char	*str;

	res = 0;
	str = (char *)frm;
	if (str == NULL)
		return (1);
	va_start(ap, frm);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			res += ft_parsing(&str, ap);
		}
		if (*str && *str != '%')
			res += write(1, str++, 1);
	}
	va_end(ap);
	return (res);
}
