/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:52:31 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/23 10:53:52 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_char(char c, char const	*set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*str;
	int		i;
	int		start;
	int		full_len;

	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && find_char(s1[start], set))
		start++;
	full_len = ft_strlen(s1);
	while (full_len > start && find_char(s1[full_len - 1], set))
		full_len--;
	str = malloc(sizeof(char) * (full_len - start + 1));
	if (!str)
		return (NULL);
	while (start < full_len)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}
