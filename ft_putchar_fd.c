/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrady <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:01:34 by gabrady           #+#    #+#             */
/*   Updated: 2019/02/27 11:24:06 by gabrady          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
