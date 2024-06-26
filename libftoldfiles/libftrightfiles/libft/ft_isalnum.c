/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:45:14 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/15 23:07:02 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*int	main(int argc, char **argv)
int	main(void)
{
	int	c;
	
	c = 42;
	ft_isalnum(c);
	printf("%d",ft_isalnum(c));
	return(0);
}*/
