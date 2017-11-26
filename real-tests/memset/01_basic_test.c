/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:15:15 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:55:08 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_testq(void)
{
	char	str[50] = "A basic test of memset";
	if (ft_memset(str, 'a', 4) == memset(str, 'a', 4))
		return (0);
	else
		return (1);
}
