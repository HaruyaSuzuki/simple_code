/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasuzuki <hasuzuki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 07:45:39 by hasuzuki          #+#    #+#             */
/*   Updated: 2021/10/24 10:07:15 by hasuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

enum FLAG { YES, NO };// 0 = YES, 1 = NO

void	is_yes(int n)
{
	if (n == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}

void	said(char who[4], char heaven_side[4])
{
	cout << endl << endl;
	cout << "-----------------------------" << endl;
	cout << "天国が" << heaven_side << "にあった場合" << endl;
	cout << "-----------------------------" << endl;
	cout << "あなたは" << who << "です。" << endl;
	cout << "y: 天国へ行ける" << endl;
	cout << "n: 天国へ行けない" << endl;
	cout << "-----------------------------" << endl;
}

int		main(void)
{
	enum FLAG engel_left, devil_left, engel_right, devil_right;
	char flagA;
	char flagB;

	cout << "右へ進めば左の道にある天国または右の道にある天国に行けますか" << endl;
	cout << "A: 右へ進めば左の道にある天国に行けますか" << endl;
	cout << "B: 右へ進めば右の道にある天国に行けますか" << endl;
	cout << "AとBは「または(もしくは)」で繋がっているためAかBのどちらかが「はい」ならTRUEとなる" << endl << endl;

	said("天使", "左");
	cout << "A: 右へ進めば左の道にある天国に行けますか" << endl;
	cin >> flagA;
	cout << "B: 右へ進めば右の道にある天国に行けますか" << endl;
	cin >> flagB;
	if (flagA == 'y' || flagB == 'y') engel_left = YES;
	else engel_left = NO;

	said("悪魔", "左");
	cout << "A: 右へ進めば左の道にある天国に行けますか" << endl;
	cin >> flagA;
	cout << "B: 右へ進めば右の道にある天国に行けますか" << endl;
	cin >> flagB;
	if (flagA == 'y' || flagB == 'y') devil_left = NO;
	else devil_left = YES;

	said("天使", "右");
	cout << "A: 右へ進めば左の道にある天国に行けますか" << endl;
	cin >> flagA;
	cout << "B: 右へ進めば右の道にある天国に行けますか" << endl;
	cin >> flagB;
	if (flagA == 'y' || flagB == 'y') engel_right = YES;
	else engel_right = NO;

	said("悪魔", "右");
	cout << "A: 右へ進めば左の道にある天国に行けますか" << endl;
	cin >> flagA;
	cout << "B: 右へ進めば右の道にある天国に行けますか" << endl;
	cin >> flagB;
	if (flagA == 'y' || flagB == 'y') devil_right = NO;
	else devil_right = YES;

	cout << "engel_left: ";
	is_yes(engel_left);
	cout << "devil_left: ";
	is_yes(devil_left);
	cout << "engel_right: ";
	is_yes(engel_right);
	cout << "devil_right: ";
	is_yes(devil_right);

	return (0);
}