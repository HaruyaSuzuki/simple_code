#include <iostream>//or <cstdio>

double  ft_square(double x)
{
    return (x * x);
}

int     main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    double  ans;
    double  req;
    //iostream
    std::cout << "Hello, Please put your number\n";
    std::cin >> req;
    ans = ft_square(req);
    std::cout << "It is  " << ans << '.' << std::endl;
    return (0);
}