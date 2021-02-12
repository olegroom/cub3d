/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosfryd <rosfryd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:59:04 by rosfryd           #+#    #+#             */
/*   Updated: 2020/11/03 14:56:14 by rosfryd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int ch)
{
	int	res;

	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		res = 1;
	else
		res = 0;
	return (res);
}
