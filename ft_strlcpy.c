/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:35:16 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/23 10:52:43 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!*dst && !*src)
		return (0);
	while (src[j])
		j++;
	if (!len)
		return (j);
	i = 0;
	while (i < len - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
