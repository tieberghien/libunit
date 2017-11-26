/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_nomemory_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:24:41 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:05:23 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		no_memory_test(void)
{
	if (ft_strcmp(ft_strdup("42 Test"),strdup("42 Test")) == 0)
		return (0);
	else
		return (-1);
}
