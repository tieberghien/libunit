/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_digit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:14:32 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:22:38 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		digit_test3(void)
{
	if (ft_toupper('2') == toupper('2'))
		return (0);
	else
		return (-1);
}
