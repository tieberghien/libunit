/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:20:46 by wbaridon          #+#    #+#             */
/*   Updated: 2017/11/25 16:07:18 by wbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		basic_test(void)
{
	char	basic_dest[50];
	char	basic_src[50];

	
	// faire en sorte de donner une taille suffisante
	if (ft_strcat("Part","This") == strcat("Part","This"))
		return (0);
	else
		return (-1);
}
