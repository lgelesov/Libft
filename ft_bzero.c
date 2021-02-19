/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:05:42 by ltrivinh          #+#    #+#             */
/*   Updated: 2021/02/18 17:11:21 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*strtemp;
	size_t			i;

	strtemp = s;
	i = 0;
	while (i < n)
	{
		strtemp[i] = '\0';
		i++;
	}
}
