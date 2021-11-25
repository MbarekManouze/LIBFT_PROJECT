/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:49:35 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/24 13:27:53 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const	*s, unsigned int start, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*copy;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[j])
		j++;
	if (j < start)
		return (ft_strdup(""));
	copy = malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (s[start] && i < len)
	{
		copy[i] = s[start];
		i++;
		start++;
	}
	copy[i] = '\0';
	return (copy);
}
