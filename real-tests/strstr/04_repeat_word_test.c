/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_repeat_word_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:32:42 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 17:36:15 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		repeat_word_test(void)
{
	if (ft_strstr("Premier pe pe pe t petit test pet", "pe")
	== strstr("Premierpe pe pe pe t  petit test pet", "pe"))
		return (0);
	else
		return (-1);
}
