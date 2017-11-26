/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_double_negative_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:01:59 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:02:23 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>
#include "real_test.h"

int		double_negative_test(void)
{
	if (ft_atoi("--42") == atoi("--42"))
		return (0);
	else
		return (-1);
}
