/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 19:55:11 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 21:07:17 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int			basic_test(void)
{
	int		fd[2];
	char	buf[BUFF_SIZE];

	pipe(fd);
	ft_putstr_fd("Salut", 1);
	read(fd[0], buffer, 5);
	if (ft_strequ(buffer, "Salut"))
		return (0);
	else
		return (-1);
}
