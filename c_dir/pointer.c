#include <stdio.h>

/*
**	ポインタ・配列の値表示
*/

int				main(void)
{
	double						d[3] = { 0.2, 0.4, 0.6 };;
	double						*p = NULL;
	unsigned int			i;

	p = d;// ポインタと配列の関係なのでpがdのアドレスを参照する際は&をつけない(d[0]~のアドレスをpに参照させる)
	i = 0;
	while (i < 3)
	{
		printf("%f\n", d[i]);// 配列 : 配列風
		printf("%f\n", *(d + i));// 配列 : ポインタ風
		//printf("%f\n", *(p + i));// ポインタ : ポインタ風(p++;とi++;が共存してしまっている(2つともインクリメントしている)ため正常に動かす際はp++;を消す。)
		printf("%f\n", *p);// ポインタ : ポインタ風2
		printf("\n");
		p++;
		i++;
	}
	return (0);
}