/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:11:58 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/04/07 23:20:18 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int	array[5];
	int	*p;
	int	i;

	i = 0;
	while (i < 5)
	{
		array[i] = i;
		i++;
	}

	p = array;
	while (p != &array[5])
	{
		printf("%d\n", *p);
		p++;
	}

	return 100;
}