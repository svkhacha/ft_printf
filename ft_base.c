/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:22:15 by svkhacha          #+#    #+#             */
/*   Updated: 2022/05/20 14:30:49 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(unsigned long long nbr, unsigned int base, int type)
{
	int	i;

	i = 0;
	if (nbr > base - 1)
		i += ft_base(nbr / base, base, type);
	if (nbr % base < 10)
		i += ft_putchar(nbr % base + 48);
	else if (nbr % base >= 10 && type == 87)
		i += ft_putchar(nbr % base + 87);
	else if (nbr % base >= 10 && type == 55)
		i += ft_putchar(nbr % base + 55);
	return (i);
}
