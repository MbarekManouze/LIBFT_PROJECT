/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:44:04 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/23 10:49:34 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	len_n(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	div_n(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;
	int		i;
	int		len;
	int		j;

	i = 0;
	nb = n;
	len = len_n(nb);
	j = len;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		result[0] = '-';
		len--;
		i++;
	}
	while (i < j)
		result[i++] = ((nb / div_n(len--)) % 10) + 48;
	result[i] = '\0';
	return (result);
}
