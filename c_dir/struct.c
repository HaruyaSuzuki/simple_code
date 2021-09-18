#include <stdio.h>
#include <string.h>

/*
**	mallocによるヒープ領域の確保
**	- 注意点 -
**	確保した領域はfreeを使って解放しなければならない。
**
**	- 補足 -
**	メモリの領域について
**	1. プログラム領域: プログラムが格納される領域
**	2. 静的領域: グローバル変数やstatic変数が置かれる領域
**	3. ヒープ領域: 動的に確保されたメモリを置く領域
**	4. スタック領域: ローカル変数などが置かれる領域
*/

struct 		student
{
	int			id;
	char		*name;
};

int				main(void)
{
	struct	student data;

	data.id = 1;
	data.name = "name";
	printf("id:%d\nname:%s\n", data.id, data.name);
	return (0);
}