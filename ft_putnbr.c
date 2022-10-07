/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:56:18 by svkhacha          #+#    #+#             */
/*   Updated: 2022/04/20 21:02:23 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int				i;
	unsigned int	num;

	i = 0;
	if (nbr < 0)
	{
		i += ft_putchar('-');
		num = nbr * (-1);
	}
	else
		num = nbr;
	if (num >= 10)
		i += ft_putnbr(num / 10);
		i += ft_putchar(num % 10 + '0');
	return (i);
}
