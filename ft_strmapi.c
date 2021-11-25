/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanouze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:34:11 by mmanouze          #+#    #+#             */
/*   Updated: 2021/11/23 12:49:33 by mmanouze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*store;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[j])
		j++;
	store = malloc((j + 1) * sizeof(char));
	if (!store)
		return (NULL);
	while (s[i])
	{
		store[i] = f(i, s[i]);
		i++;
	}
	store[i] = '\0';
	return (store);
}
