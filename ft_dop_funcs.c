/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dop_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elman <elman@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 21:59:48 by elman             #+#    #+#             */
/*   Updated: 2021/07/15 00:27:59 by elman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_symbol(long long num)
{
	int	count;

	count = 1;
	if (num < 0)
		num *= -1;
	while (num >= 10)
	{
		num /= 10;
		count++;
	}
	return (count);
}

//for ptr type
int	ft_ptrlen(unsigned long adrs)
{
	int	len;

	len = 0;
	if (adrs == 0)
		return (1);
	while (adrs)
	{
		adrs /= 16;
		len++;
	}
	return (len);
}

char	*ft_putptr(unsigned long adrs)
{
	int		len;
	char	*res;

	len = ft_ptrlen(adrs);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	if (!adrs)
		res[0] = '0';
	res[len] = 0;
	while (adrs)
	{
		len--;
		res[len] = HEXDEC_LOW[adrs % 16];
		adrs /= 16;
	}
	return (res);
}

// for hex
int	ft_hexlen(unsigned int hex)
{
	int	len;

	len = 0;
	if (hex == 0)
		return (1);
	while (hex)
	{
		hex /= 16;
		len++;
	}
	return (len);
}

char	*ft_puthex(unsigned int hex, char **str)
{
	int		len;
	char	*res;

	len = ft_hexlen(hex);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	if (!hex)
		res[0] = '0';
	res[len] = 0;
	while (hex)
	{
		len--;
		if (**str == 'x')
			res[len] = HEXDEC_LOW[hex % 16];
		else
			res[len] = HEXDEC_UPPER[hex % 16];
		hex /= 16;
	}
	return (res);
}
