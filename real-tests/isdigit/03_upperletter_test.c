/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_upperletter_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:16:01 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 15:16:25 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		upperletter_test(void)
{
	if (ft_toupper("MAJ") == toupper("MAJ"))
		return (0);
	else
		return (-1);
}
