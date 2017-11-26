/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_letter_and_digit_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:17:10 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/26 20:30:45 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		letter_and_digit_test(void)
{
	if (ft_toupper('Y') == toupper('Y'))
		return (0);
	else
		return (-1);
}
