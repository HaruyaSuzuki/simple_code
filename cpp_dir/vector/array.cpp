#include <iostream>
#include <vector>

using namespace std;

int		main(void)
{
	// vector<vector<[型]> > [変数名];
	// vector<vector<[型]> > [変数名]([要素数]);
	// vector<vector<[型]> > [変数名]([要素数], vector<型>([要素数2]));
	// vector<vector<[型]> > [変数名]([要素数], vector<型>([要素数2], [初期値]));
	vector<vector<int> > nn(3, vector<int>(3));

	// nnに値を入れる
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++) nn[i][j] = i * j;
	}

	// nnを出力
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++) cout << nn[i][j] << endl;
	}

	return (0);
}