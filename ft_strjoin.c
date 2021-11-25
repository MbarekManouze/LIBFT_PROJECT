/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:51:14 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/23 10:52:00 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		i;
	int		c;
	char	*store;

	i = 0;
	c = 0;
	if (!s1 || !s2)
		return (0);
	store = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!store)
		return (NULL);
	while (s1[i])
	{
		store[i] = s1[i];
		i++;
	}
	while (s2[c])
	{
		store[i] = s2[c];
		i++;
		c++;
	}
	store[i] = '\0';
	return (store);
}
