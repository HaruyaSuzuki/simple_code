#include <iostream>

using namespace std;

struct 	Data
{
	int		n;
};

int		main(void)
{
	Data dt;// Cでは構造体を宣言するときはstruct Data dt;で宣言する必要があったがC++ではその必要がない

	dt.n = 100;
	cout << dt.n << endl;
	return (0);
}