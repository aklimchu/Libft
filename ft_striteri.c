/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:25:35 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/06 10:32:21 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The function applies the function ’f’ on each character of the string passed
// as argument, passing its index as first argument. Each character is passed by
//address to ’f’ to be modified if necessary
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (*s)
	{
		(*f)(i, s);
		s++;
		i++;
	}
	return ;
}
