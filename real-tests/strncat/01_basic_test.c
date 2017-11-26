/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:24:34 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:27:52 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test6(void)
{
	if (strncat("This is destination","This is source", 10)
	== ft_strncat("This is destination", "This is source", 10))
		return (0);
	else
		return (-1);
}
