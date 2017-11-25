/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:24:34 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 11:33:02 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test(void)
{
	if (strncat("This is destination","This is source", 35)
	== ft_strncat("This is destination", "This is source", 35)
		return (0);
	else
		return (-1);
}
