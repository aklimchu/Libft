/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:36:10 by aklimchu          #+#    #+#             */
/*   Updated: 2024/04/19 15:35:04 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function checks if argument is an alphanumeric character (libc)
int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
