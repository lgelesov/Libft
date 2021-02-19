/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:39:33 by ltrivinh          #+#    #+#             */
/*   Updated: 2021/02/18 16:18:23 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (char*)&s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return (char*)&s[i];
	}
	return (NULL);
}
