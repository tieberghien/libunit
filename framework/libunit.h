/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etieberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 22:45:44 by etieberg          #+#    #+#             */
/*   Updated: 2017/11/25 18:19:24 by etieberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/wait.h>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[96m"
# define RESET		"\x1b[0m"

typedef struct		s_unit
{
	char			*test;
	int				(*f)(void);
	struct s_unit	*next;
}					t_unit;

int					launch_tests(t_unit **tests, int i);
void				load_tests(t_unit **lst, char *name_test, int (*f)(void), int *i);
void				colourize(char *colour, char *res);

#endif

