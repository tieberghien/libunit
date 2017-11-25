/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buse_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:44:17 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 19:51:55 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		buse_test(void)
{
	char	*dummy;

	if (!(dummy = (char*)malloc(sizeof(char) * 2)))
		return (-1);
	free(dummy);
	if (dummy[0] = 'a')
		return (0);
	else
		return (-1);
}
