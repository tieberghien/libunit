/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_free_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:26:43 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 13:27:45 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		free_test(void)
{
	// possible de tester comme cela ? a checker lorsque mini framework sera good
	if (free(ft_strdup("42 Test")) == free(strdup("42 Test")))
		return (0);
	else
		return (-1);
}
