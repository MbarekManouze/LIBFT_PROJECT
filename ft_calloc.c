/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:48:12 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/23 12:51:02 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*rtn;
	size_t	i;

	i = 0;
	rtn = malloc(size * count);
	if (!rtn)
		return (NULL);
	while (i <= (size * count))
	{
		rtn[i] = 0;
		i++;
	}
	return (rtn);
}
