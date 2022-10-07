/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:25:09 by svkhacha          #+#    #+#             */
/*   Updated: 2022/04/20 22:05:00 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	int		i;
	va_list	lst;

	i = 0;
	va_start(lst, form);
	while (*form != '\0')
	{
		if (*form == '%' && form++)
		{
			if (*form == 'c' || *form == 's'
				|| *form == 'd' || *form == 'i'
				|| *form == 'u' || *form == 'x'
				|| *form == 'X' || *form == 'p'
				|| *form == '%')
				i += for_form(form, &lst);
		}
		else
			i += ft_putchar(*form);
		form++;
	}
	va_end(lst);
	return (i);
}
