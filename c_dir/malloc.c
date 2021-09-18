#include <stdio.h>
#include <stdlib.h>

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

#define SIZE 3

int				main(void)
{
	int						*arr = NULL;
	unsigned int	i;

	// 変数 = (変数の型)malloc(sizeof(型)*型のサイズ)
	arr = (int*)malloc(sizeof(int)*SIZE);// ヒープ領域を確保
	// 値の代入
	for (i = 0;i < SIZE;i++) *(arr + i) = i;

	// 結果の出力
	for (i = 0;i < SIZE;i++) printf("arr[%d]: %d\n", i, *(arr + i));

	//メモリの解放
	free(arr);
	return (0);
}