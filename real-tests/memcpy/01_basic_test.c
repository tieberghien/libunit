/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:25:48 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:42:51 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_testx(void)
{
	char	dest1[100];
	char 	dest2[100];
	int		resultx;
	
	resultx = ft_strcmp(ft_memcpy(dest1, "Petit test", 5), memcpy(dest2, "Petit test", 5));
	if (resultx == 0)
		return (0);
	else
		return (-1);	
}
