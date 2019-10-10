/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:54:44 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/10 17:42:12 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

char			*ft_itoa(int n);
char			**ft_split(const char *s, char c);
int				ft_strlen(char *str);
void			*ft_memset(void *s, int c, size_t n);

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

#endif
