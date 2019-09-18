/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 05:54:41 by yvillepo          #+#    #+#             */
/*   Updated: 2017/12/19 07:54:35 by yvillepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int x1, int x2)
{
	if (x1 > x2)
		return (x1);
	else
		return (x2);
}

int		ft_min(int x1, int x2)
{
	if (x1 < x2)
		return (x1);
	else
		return (x2);
}
