/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:01:18 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 18:01:46 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		space_test(void)
{
	char	dest1[100];
	char 	dest2[100];
	
	if (ft_memcpy(dest1, "     ", 5) == memcpy(dest2, "     ", 5))
		return (0);
	else
		return (-1)	
}
