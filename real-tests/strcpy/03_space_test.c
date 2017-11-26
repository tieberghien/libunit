/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_space_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:49:23 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 22:33:00 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		space_testa(void)
{
	char dest1[100];
	char dest2[100];

	if (ft_strcpy(dest1, "   ") == strcpy(dest2, "   "))
		return (0);
	else
		return (-1);
}
