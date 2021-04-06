/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 01:12:52 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/02/20 14:33:57 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mylib.h"

/*
** 引数 -> 出力した1文字
** エラー -> EOF
*/

int		ft_getchar(char c)
{
	write(1, &c, 1);
	return (c);
}