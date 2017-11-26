/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:44:42 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 17:47:41 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test(void)
{
	char dest1[100];
	char dest2[100];

	if (ft_strcpy(dest1, "Copie cela") == strcpy(dest2, "Copie cela"))
		return (0);
	else
		return (-1);
}
