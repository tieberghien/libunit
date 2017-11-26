/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_double_positive_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:02:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:03:27 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include "real_test.h"

int		double_positive_test(void)
{
	if (ft_atoi("++42") == atoi("++42"))
		return (0);
	else
		return (-1);
}
