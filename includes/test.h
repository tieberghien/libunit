/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 22:16:13 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/26 19:05:56 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "libunit.h"
# include "libft.h"

int		test_launcher(void);
int		ok_test(void);
int		ko_test(void);
int		segv_test(void);
int		buse_test(void);
int		timeout_test(void);
int		abort_test(void);

#endif
