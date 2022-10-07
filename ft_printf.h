/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:10:03 by svkhacha          #+#    #+#             */
/*   Updated: 2022/04/20 21:43:46 by svkhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_base(unsigned long long nbr, unsigned int base, int type);
int	ft_ptr(unsigned long long ptr);
int	for_form(const char *form, va_list *lst);
int	ft_printf(const char *form, ...);

#endif
