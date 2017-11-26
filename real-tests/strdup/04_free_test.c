/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_free_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:26:43 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 21:01:57 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		free_test(void)
{
	char	*str1;
	char	*str2;

	str1 = ft_strdup("Free");
	str2 = strdup("Free");
	if (ft_strcmp(str1,str2) == 0)
		return (0);
	else
		return (-1);
}
