/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_begin_needle_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:36:25 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 17:36:39 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		begin_needle_test(void)
{
	if (ft_strstr("Premierpe pet", "pet")
	== strstr("Premierpe pet", "pet"))
		return (0);
	else
		return (-1);
}
