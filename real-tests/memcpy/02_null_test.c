/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:00:48 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:56:03 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		null_test(void)
{
	char	dest1[100];
	char 	dest2[100];
	
	if (ft_memcpy(dest1, "", 5) == memcpy(dest2, "", 5))
		return (0);
	else
		return (-1);	
}
