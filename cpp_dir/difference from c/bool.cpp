#include <iostream>

using namespace std;

bool	jadge(int n)// C++ではbool型を宣言することができ、返り値としてtrue, falseの2つのみ扱える
{
	if (n >= 0) return (true);
	else return (false);
}

int		main(void)
{
	int	n;

	n = 0;
	if (jadge(n) == true) cout << "positive" << endl;
	else cout << "negative" << endl;
	return (0);
}