/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:18:27 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:23:21 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		space_test3(void)
{
	if (ft_toupper(' ') == toupper(' '))
		return (0);
	else
		return (-1);
}
