/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-s <cbrito-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:50:56 by cbrito-s          #+#    #+#             */
/*   Updated: 2024/11/25 17:42:51 by cbrito-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printchar(int c);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_printunbr(unsigned int n);
int		ft_printf(const char *str, ...);
int		printf_type(va_list args, char str);

char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);

#endif
