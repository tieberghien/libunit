/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_lenght_zero_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:17:35 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:53:51 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		lenght_zero_test(void)
{
	char	str[50] = "A basic test of memset";
	if (ft_memset(&str, 'a', 0) == memset(&str, 'a', 0))
		return (0);
	else
		return (1);
}
