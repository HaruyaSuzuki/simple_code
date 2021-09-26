#include <iostream>

using namespace std;

void    ref(int& a)// C++ではパラメータでアドレスを宣言し、引数で参照渡しをすることで値を受け取ることができ、値を書き換えれる
{
    a = 1;
}

void    print(int n)
{
    cout << n << endl;
}

int     main(void)
{
    int a;

    a = 0;
    print(a);
    ref(a);// 参照渡し
    print(a);
    return (0);
}