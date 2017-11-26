/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:24:34 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 18:12:35 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test(void)
{
	if (strncat("This is destination","This is source", 10)
	== ft_strncat("This is destination", "This is source", 10))
		return (0);
	else
		return (-1);
}
