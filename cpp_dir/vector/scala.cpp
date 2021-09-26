#include <iostream>
#include <vector>

using namespace std;

int		main(void)
{
	// vector<[型]> [変数名];
	// vector<[型]> [変数名]([要素数]);
	// vector<[型]> [変数名]([要素数], [初期値]);
	vector<int> n(3);

	// nに値を入れる
	for (int i=0; i<3; i++) n[i] = i;

	// nを出力
	for (int i=0; i<3; i++) cout << n[i] << endl;

	return (0);
}