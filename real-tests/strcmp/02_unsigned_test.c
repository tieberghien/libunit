/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_unsigned_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:09:35 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 13:10:26 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		unsigned_test(void)
{
	if (ft_strcmp("\200", "\0") == strcmp("\200", "\0"))
		return (0);
	else
		return (-1);
}
