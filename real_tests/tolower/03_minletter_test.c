/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_minletter_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:54:42 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 17:54:57 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		minletter_test(void)
{
	if (ft_tolower('c') == tolower('c'))
		return (0);
	else
		return (-1);
}
