/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:54:44 by cdapurif          #+#    #+#             */
/*   Updated: 2019/10/11 18:22:06 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
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
