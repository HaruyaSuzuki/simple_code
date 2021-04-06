/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 01:03:05 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/02/20 14:33:54 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mylib.h"

/*
** 引数 -> 出力した文字
** エラー -> EOF
*/

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}