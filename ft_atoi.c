/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrivinh <ltrivinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:28:47 by ltrivinh          #+#    #+#             */
/*   Updated: 2021/02/19 18:51:46 by ltrivinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_sign(const char *str, unsigned int i)
{
	int	sign;

	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	return (sign);
}

int					ft_atoi(const char *nptr)
{
	int				sign;
	unsigned int	i;
	int				number;

	i = 0;
	while (nptr[i] == ' ')
	{
		i++;
	}
	sign = ft_sign(nptr, i);
	number = 0;
	while (nptr[i] != '\0')
	{
		if (ft_isdigit(nptr[i]))
		{
			number = number * 10 + nptr[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (sign * number);
}
