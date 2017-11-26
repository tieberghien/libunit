/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_one_positive_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 18:20:17 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 18:20:48 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>
#include "real_test.h"

int		one_postive_test(void)
{
	if (ft_atoi("+123456789") == atoi("+123456789"))
		return (0);
	else
		return (-1);
}
