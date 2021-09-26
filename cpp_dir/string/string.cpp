#include <iostream>
#include <string>

using namespace std;

int		main(void)
{
	string str_arr[2] = { "String1", "String2" };

	for (auto &i : str_arr)// str_arrの中身をiとして一つずつ中身の長さだけループ
	{
		cout << i << ";";
	}
	cout << endl;
	return (0);
}