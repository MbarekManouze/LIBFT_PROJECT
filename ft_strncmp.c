/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:33:17 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/23 10:53:17 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*ssr;

	str = (unsigned char *)s1;
	ssr = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while ((str[i] && ssr[i]) && str[i] == ssr[i] && i < n - 1)
		i++;
	return (str[i] - ssr[i]);
}
