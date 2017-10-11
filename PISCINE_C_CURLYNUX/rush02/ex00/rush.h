/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <yfuks@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 14:44:26 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/22 18:34:04 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# define SUCCESS 0
# define ERROR -1

int		check_errors(char *str);
char	*ft_re_malloc(char *str, int size);
int		check_char(char *str, int x, int large, int line);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	rush00(char *str, int large, int line);
void	rush01(char *str, int large, int line);
void	rush02(char *str, int large, int line);
int		ft_strlen(char *str);
void	print_stat(char *rush, int large, int line);

#endif
