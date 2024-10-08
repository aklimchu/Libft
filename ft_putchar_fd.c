/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:26:43 by aklimchu          #+#    #+#             */
/*   Updated: 2024/05/22 13:01:11 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The function outputs the character ’c’ to the given file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
