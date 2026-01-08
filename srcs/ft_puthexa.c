/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajamshid <ajamshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:28:42 by ajamshid          #+#    #+#             */
/*   Updated: 2023/12/05 16:40:18 by ajamshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int i, char c)
{
	size_t	j;
	char	hexa[17];
	int		counter;

	counter = 0;
	j = 9;
	ft_strcpy(hexa, "0123456789abcdef");
	if (c == 'X')
		while (j++ < 16)
			hexa[j] = hexa[j] - 32;
	if (i > 15)
		counter += ft_puthexa((i / 16), c);
	counter += ft_putchar(hexa[i % 16]);
	return (counter);
}
