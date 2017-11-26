/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_upperletter_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:16:01 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:10:21 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_test.h"
#include <ctype.h>

int		upperletter_test1(void)
{
	if (ft_isalpha('M') == isalpha('M'))
		return (0);
	else
		return (-1);
}
