/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamshid <ajamshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:08:04 by ajamshid          #+#    #+#             */
/*   Updated: 2023/12/05 16:42:30 by ajamshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long i)
{
	size_t	j;
	char	hexa[17];
	int		counter;

	counter = 0;
	j = 9;
	ft_strcpy(hexa, "0123456789abcdef");
	if (i > 15)
		counter += ft_printptr((i / 16));
	counter += ft_putchar(hexa[i % 16]);
	return (counter);
}

int	ft_putptr(void *ptr)
{
	int				counter;
	unsigned long	i;

	counter = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	i = (unsigned long)ptr;
	counter += ft_putstr("0x");
	return (counter += ft_printptr(i));
}
